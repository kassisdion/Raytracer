/*
** calc_preview.c for calc_preview in /home/florian/git/generaytacer/source/mlx/source/preview
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Fri May 24 12:37:28 2013 florian faisant
** Last update Tue May 28 00:12:40 2013 florian faisant
*/

#include	<stdlib.h>
#include	"struct_raytracer.h"
#include	"move.h"
#include	"inter.h"
#include	"raytracer.h"
#include	"init.h"
#include	"light.h"

static t_obj	*find_nearst_obj(t_list *list)
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

static void	complete_distance(t_list *list, t_data *data)
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
        tmp->obj->d = NO_SHADOW;
      rotate_inv(&(data->scene.eyes.pos), &(tmp->obj->rotation));
      rotate_inv(&(data->scene.vec), &(tmp->obj->rotation));
      translation_inv(&(data->scene.eyes.pos), &(tmp->obj->pos));
      tmp = tmp->next;
    }
}

int		calc_preview(t_data *data, int x, int y)
{
  t_obj		*near_obj;

  init_vec(&(data->scene.vec), x, y);
  rotate(&(data->scene.vec), &(data->scene.eyes.rotation));
  complete_distance(data->list, data);
  if ((near_obj = find_nearst_obj(data->list)) == NULL)
    return (0x000000);
  else
    return (near_obj->color);
}

