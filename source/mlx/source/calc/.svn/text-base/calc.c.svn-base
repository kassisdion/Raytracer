/*
** calc.c for calc in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sat Apr 13 14:00:50 2013 florian faisant
** Last update Wed Jun  5 13:45:59 2013 florian faisant
*/

#include	<stdlib.h>
#include	"raytracer.h"
#include	"struct_raytracer.h"
#include	"inter.h"
#include	"light.h"
#include	"init.h"
#include	"move.h"
#include	"shadow.h"
#include	"perlin.h"
#include	"effect.h"

t_obj		*find_nearst_obj(t_list *list)
{
  t_list	*tmp;
  t_obj		*near;
  double	d;

  tmp = list;
  d = -1.000;
  near = NULL;
  while (tmp != NULL)
    {
      if (tmp->obj->d >= 0.00001 && d ==  -1.000)
	{
	  d = tmp->obj->d;
	  near = tmp->obj;
	}
      else if (tmp->obj->d >= 0.00001 && tmp->obj->d < d)
	{
	  d = tmp->obj->d;
	  near = tmp->obj;
	}
      tmp = tmp->next;
    }
  if (d == -1.000)
    return (NULL);
  return (near);
}

static void	each_inter(t_list *tmp, t_data *data)
{
  if (tmp->obj->type == SPHERE)
    tmp->obj->d = inter_sphere(&(data->scene.vec), &(data->scene.eyes.pos),
			       tmp->obj->rayon);
  else if (tmp->obj->type == PLAN)
    tmp->obj->d = inter_plan(&(data->scene.vec), &(data->scene.eyes.pos));
  else if (tmp->obj->type == CYLINDRE)
    tmp->obj->d = inter_cylindre(&(data->scene.vec), &(data->scene.eyes.pos),
				 tmp->obj->rayon);
  else if (tmp->obj->type == CONE)
    tmp->obj->d = inter_cone(&(data->scene.vec), &(data->scene.eyes.pos),
			     tmp->obj->rayon);
  else if (tmp->obj->type == PARABO)
    tmp->obj->d = inter_parabo(&(data->scene.vec), &(data->scene.eyes.pos),
			       tmp->obj->rayon);
  else if (tmp->obj->type == HYPERBO)
    tmp->obj->d = inter_hyperbo(&(data->scene.vec), &(data->scene.eyes.pos),
				tmp->obj->rayon);
}

void		complete_distance(t_list *list, t_data *data)
{
  t_list	*tmp;

  tmp = list;
  while (tmp != NULL)
    {
      translation(&(data->scene.eyes.pos), &(tmp->obj->pos));
      rotate(&(data->scene.vec), &(tmp->obj->rotation));
      rotate(&(data->scene.eyes.pos), &(tmp->obj->rotation));
      each_inter(tmp, data);
      if (check_limit(tmp->obj, data) == FAIL)
	tmp->obj->d = FAIL;
      rotate_inv(&(data->scene.eyes.pos), &(tmp->obj->rotation));
      rotate_inv(&(data->scene.vec), &(tmp->obj->rotation));
      translation_inv(&(data->scene.eyes.pos), &(tmp->obj->pos));
      tmp = tmp->next;
    }
}

static int	make_perlin_color(double x, double y, t_data *data,
				  t_obj *near_obj)
{
  double	value;
  int		tmp;
  int		color;

  value = bruit_coherent2d(x, y, &data->perlin);
  tmp = near_obj->color;
  my_perlin(value, near_obj->effect, near_obj, x);
  color = define_real_color(near_obj, data);
  near_obj->color = tmp;
  return (color);
}

int		calc(t_data *data, double x, double y)
{
  t_obj		*near_obj;
  int		color;
  int		make_perlin;

  make_perlin = 0;
  init_vec(&(data->scene.vec), x, y);
  rotate(&(data->scene.vec), &(data->scene.eyes.rotation));
  complete_distance(data->list, data);
  if ((near_obj = find_nearst_obj(data->list)) == NULL)
    make_perlin = 1;
  else if (near_obj->effect > 3 && near_obj->effect < 7)
    {
      if ((color = make_perlin_color(x, y, data, near_obj)) == FAIL)
	make_perlin = 1;
    }
  else if ((color = define_real_color(near_obj, data)) == FAIL)
    make_perlin = 1;
  if (make_perlin == 1)
    {
      if (data->option.font == 1)
	return (make_perlin_font(bruit_coherent2d(x, y, &data->perlin)));
      else
	color = 0x000000;
    }
  return (color);
}
