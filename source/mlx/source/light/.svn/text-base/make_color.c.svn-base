/*
** make_color.c for make_color in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Mon Apr 15 23:31:13 2013 florian faisant
** Last update Thu Jun  6 11:11:38 2013 florian faisant
*/

#include	<math.h>
#include	"struct_raytracer.h"
#include	"raytracer.h"
#include	"light.h"
#include	"my.h"

static int	calc_new_r(t_obj *obj, double cos, t_spot *spot, int c)
{
  int		new_r;
  int		spot_r;

  new_r = (c >> 16) & 0xFF;
  spot_r = (spot->color >> 16) & 0xFF;
  new_r = (new_r * cos) + (new_r / 10);
  new_r = new_r + ((float)(obj->brillance / 100) * cos * spot_r);
  if (new_r > 0xFF)
    new_r = 0xFF;
  return (new_r);
}

static int	calc_new_v(t_obj *obj, double cos, t_spot *spot, int c)
{
  int		new_v;
  int		spot_v;

  new_v = (c >> 8) & 0xFF;
  spot_v = (spot->color >> 8) & 0xFF;
  new_v = (new_v * cos) + (new_v / 10);
  new_v = new_v + ((float)(obj->brillance / 100) * cos * spot_v);
  if (new_v > 0xFF)
    new_v = 0xFF;
  return (new_v);
}

static int	calc_new_b(t_obj *obj, double cos, t_spot *spot, int c)
{
  int		new_b;
  int		spot_b;

  new_b = (c) & 0xFF;
  spot_b = (spot->color) & 0xFF;
  new_b = (new_b * cos) + (new_b / 10);
  new_b = new_b + ((float)(obj->brillance / 100) * cos * spot_b);
  if (new_b > 0xFF)
    new_b = 0xFF;
  return (new_b);
}

static int	check_color_effect(t_obj *obj, int new_r)
{
  int		color;

  color = obj->color;
  if (obj->effect == 10)
    {
      color = new_r;
      color = (color << 8) + (new_r & 0xff);
      color = (color << 8) + (new_r & 0xff);
    }
  else
    my_putstr("Sorry, unknow effect\n");
  return (color);
}

int		normal_color(t_obj *obj, double cos, t_spot *spot, int c)
{
  int		new_r;
  int		new_v;
  int		new_b;
  int		color;

  if (cos > 1.000)
    cos = 1.000;
  else if (cos == -2.000)
    cos = 0.09;
  else if (cos < 0.10)
    cos = 0.10;
  new_r = (calc_new_r(obj, cos, spot, c));
  new_v = (calc_new_v(obj, cos, spot, c));
  new_b = (calc_new_b(obj, cos , spot, c));
  color = new_r;
  color = (color << 8) + (new_v & 0xff);
  color = (color << 8) + (new_b & 0xff);
  if (obj->effect > 9)
    color = check_color_effect(obj, new_r);
  if ((cos == 0.09) && (SHADOW_MODE == 1))
    color = remove_light(&color);
  if ((cos == 0.09) && (SHADOW_MODE == 2))
    color = 0x000000;
  return (color);
}
