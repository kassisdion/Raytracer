/*
** other_shadow.c for other_shadow in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Fri May 10 21:10:02 2013 florian faisant
** Last update Fri May 10 21:11:07 2013 florian faisant
*/

#include	"struct_raytracer.h"
#include	"inter.h"
#include	"move.h"

double		shadow_hyperbo(t_coordonne *inter, t_coordonne *l, t_list *tmp)
{
  double	d;

  translation(inter, &(tmp->obj->pos));
  rotate(inter, &(tmp->obj->rotation));
  rotate(l, &(tmp->obj->rotation));
  d = inter_parabo(l, inter, tmp->obj->rayon);
  rotate_inv(inter, &(tmp->obj->rotation));
  rotate_inv(l, &(tmp->obj->rotation));
  translation_inv(inter, &(tmp->obj->pos));
  return (d);
}
