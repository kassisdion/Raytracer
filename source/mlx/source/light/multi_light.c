/*
** multi_light.c for multi_light in /home/florian/git/rt/source/light
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Wed May  1 14:59:55 2013 florian faisant
** Last update Wed Jun  5 13:45:34 2013 florian faisant
*/

#include	<stdlib.h>
#include	"struct_raytracer.h"
#include	"light.h"
#include	"shadow.h"
#include	"raytracer.h"
#include	"move.h"
#include	"texture.h"
#include	"calc.h"

static int	calc_new_color(int color1, int color2)
{
  int		new_r;
  int		new_v;
  int		new_b;
  int		new_color;

  new_r = ((color1 >> 16) & 0xFF) + ((color2 >> 16) & 0xFF);
  new_v = ((color1 >> 8) & 0xFF) + ((color2 >> 8) & 0xFF);
  new_b = ((color1) & 0xFF) + ((color2) & 0xFF);
  if (new_r > 0xFF)
    new_r = 0xFF;
  if (new_v > 0xFF)
    new_v = 0xFF;
  if (new_b > 0xFF)
    new_b = 0xFF;
  new_color = ((new_r << 16) & 0xFF0000)
    | ((new_v << 8) & 0xFF00)
    | ((new_b) & 0xFF);
  return (new_color);
}

static int	get_color(t_data *data, t_obj *obj, t_spot *spot)
{
  int		power;
  int		color;

  power = shadow(data, obj, spot);
  color = obj->color;
  if (obj->effect > 6 && obj->effect < 10)
    obj->color = aply_texture(obj, data);
  if (obj->type == PLAN)
    color = luminosite_plan(data, obj, spot, power);
  else if (obj->type == SPHERE)
    color = luminosite_sphere(data, obj, spot, power);
  else if (obj->type == CYLINDRE)
    color = luminosite_cylindre(data, obj, spot, power);
  else  if (obj->type == CONE)
    color = luminosite_cone(data, obj, spot, power);
  else if (obj->type == PARABO)
    color = luminosite_parabo(data, obj, spot, power);
  else if (obj->type == HYPERBO)
    color = luminosite_hyperbo(data, obj, spot, power);
  return (color);
}

static int	calc_real_color(t_obj *obj, t_data *data, t_spot *spot)
{
  int		color;
  double	range;
  double	save[3];

  save[0] = spot->pos->x;
  save[1] = spot->pos->y;
  save[2] = spot->pos->z;
  range = - (LIGHT_PRECISION / 2);
  color = obj->color;
  while (range < LIGHT_PRECISION)
    {
      if (range == - (LIGHT_PRECISION / 2))
	color = get_color(data, obj, spot);
      else
	color = add_color(color, get_color(data, obj, spot));
      spot->pos->x = save[0] + range;
      spot->pos->y = save[1] + range;
      range += 0.5;
    }
  spot->pos->x = save[0];
  spot->pos->y = save[1];
  spot->pos->z = save[2];
  return (color);
}

int		define_real_color(t_obj *obj, t_data *data)
{
  t_spot	*spot;
  int		color;
  int		tmp;
  int		start;

  start = 0;
  spot = data->spot;
  color = FONT;
  while (spot != NULL)
    {
      if (start == 0)
	{
	  if ((color = calc_real_color(obj, data, spot)) == FAIL)
	    return (FAIL);
	  start = 1;
	}
      else
	{
	  if ((tmp = calc_real_color(obj, data, spot)) == FAIL)
	    return (FAIL);
	  color = calc_new_color(tmp, color);
	}
      spot = spot->next;
    }
  return (color);
}
