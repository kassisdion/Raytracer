/*
** move_for_light.c for move_for_light in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Thu May  9 17:40:29 2013 florian faisant
** Last update Fri May 24 22:25:52 2013 florian faisant
*/

#include	"struct_raytracer.h"
#include	"move.h"

void		move_for_light(t_data *data, t_obj *obj, t_spot *spot)
{
  translation(&(data->scene.eyes.pos), &(obj->pos));
  translation(spot->pos, &(obj->pos));
  rotate(&(data->scene.vec), &(obj->rotation));
  rotate(spot->pos, &(obj->rotation));
  rotate(&(data->scene.eyes.pos), &(obj->rotation));
}

void		move_inv_for_light(t_data *data, t_obj *obj, t_spot *spot)
{
  rotate_inv(&(data->scene.eyes.pos), &(obj->rotation));

  rotate_inv(spot->pos, &(obj->rotation));
  rotate_inv(&(data->scene.vec), &(obj->rotation));
  translation_inv(spot->pos, &(obj->pos));
  translation_inv(&(data->scene.eyes.pos), &(obj->pos));
}
