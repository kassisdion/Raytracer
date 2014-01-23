/*
** check_shadow.c for check_shadow in /home/florian/git/rt/source/light
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sun Apr 14 00:01:01 2013 florian faisant
** Last update Tue Jun  4 03:17:37 2013 florian faisant
*/

#include	"struct_raytracer.h"
#include	"inter.h"
#include	"move.h"

double		shadow_sphere(t_coordonne *inter, t_coordonne *l, t_list *tmp)
{
  double	d;

  translation(inter, &(tmp->obj->pos));
  rotate(inter, &(tmp->obj->rotation));
  rotate(l, &(tmp->obj->rotation));
  d = inter_sphere(l, inter, tmp->obj->rayon);
  rotate_inv(l, &(tmp->obj->rotation));
  rotate_inv(inter, &(tmp->obj->rotation));
  translation_inv(inter, &(tmp->obj->pos));
  return (d);
}

double		shadow_cylindre(t_coordonne *inter, t_coordonne *l,
				t_list *tmp)
{
  double	d;

  translation(inter, &(tmp->obj->pos));
  rotate(inter, &(tmp->obj->rotation));
  rotate(l, &(tmp->obj->rotation));
  d = inter_cylindre(l, inter, tmp->obj->rayon);
  rotate_inv(l, &(tmp->obj->rotation));
  rotate_inv(inter, &(tmp->obj->rotation));
  translation_inv(inter, &(tmp->obj->pos));
  return (d);
}

double		shadow_plan(t_coordonne *inter, t_coordonne *l, t_list *tmp)
{
  double	d;

  translation(inter, &(tmp->obj->pos));
  rotate(inter, &(tmp->obj->rotation));
  rotate(l, &(tmp->obj->rotation));
  d = inter_plan(l, inter);
  rotate_inv(l, &(tmp->obj->rotation));
  rotate_inv(inter, &(tmp->obj->rotation));
  translation_inv(inter, &(tmp->obj->pos));
  return (d);
}

double		shadow_cone(t_coordonne *inter, t_coordonne *l, t_list *tmp)
{
  double	d;

  translation(inter, &(tmp->obj->pos));
  rotate(inter, &(tmp->obj->rotation));
  rotate(l, &(tmp->obj->rotation));
  d = inter_cone(l, inter, tmp->obj->rayon);
  rotate_inv(l, &(tmp->obj->rotation));
  rotate_inv(inter, &(tmp->obj->rotation));
  translation_inv(inter, &(tmp->obj->pos));
  return (d);
}

double		shadow_parabo(t_coordonne *inter, t_coordonne *l, t_list *tmp)
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
