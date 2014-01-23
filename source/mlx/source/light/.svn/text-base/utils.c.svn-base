/*
** utils.c for utils in /home/florian/git/rt/source
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Thu Apr 11 23:40:40 2013 florian faisant
** Last update Tue Jun  4 03:15:48 2013 florian faisant
*/

#include	"raytracer.h"
#include	"struct_raytracer.h"
#include	"move.h"

int		remove_light(int *color)
{
  int		new_color;
  int		new_r;
  int		new_v;
  int		new_b;

  new_b = (*color) & 0xFF;
  new_v = (*color >> 8) & 0xFF;
  new_r = (*color >> 16) & 0xFF;
  new_r -= new_r / 2;
  new_v -= new_v / 2;
  new_b -= new_b / 2;
  new_color = new_r;
  new_color = (new_color << 8) + (new_v & 0xff);
  new_color = (new_color << 8) + (new_b & 0xff);
  return (new_color);
}

void		init_light_vec(t_coordonne *spot, t_coordonne *l,
			       t_coordonne *inter)
{
  l->x = spot->x - inter->x;
  l->y = spot->y - inter->y;
  l->z = spot->z - inter->z;
}

void		find_pos_inter(t_coordonne *vect, t_coordonne *inter, double k,
			       t_eyes *oeil)
{
  inter->x = oeil->pos.x + k * vect->x;
  inter->y = oeil->pos.y + k * vect->y;
  inter->z = oeil->pos.z + k * vect->z;
}

int		check_limit(t_obj *obj, t_data *data)
{
  int		rtr;
  t_coordonne	inter;

  find_pos_inter(&data->scene.vec, &inter, obj->d, &data->scene.eyes);
  rotate(&inter, &(obj->rotation));
  if ((inter.x < obj->lim_min.x) && (obj->lim_min.x != 0.000))
    rtr = FAIL;
  else if ((inter.y < obj->lim_min.y) && (obj->lim_min.y != 0.000))
    rtr = FAIL;
  else if ((inter.z < obj->lim_min.z) && (obj->lim_min.z != 0.000))
    rtr = FAIL;
  else if ((inter.x > obj->lim_max.x) && (obj->lim_max.x != 0.000))
    rtr = FAIL;
  else if ((inter.y > obj->lim_max.y) && (obj->lim_max.y != 0.000))
    rtr = FAIL;
  else if ((inter.z > obj->lim_max.z) && (obj->lim_max.z != 0.000))
    rtr = FAIL;
  else
    rtr = SUCCES;
  rotate_inv(&inter, &(obj->rotation));
  return (rtr);
}
