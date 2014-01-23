/*
** effect.c for effect in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Fri May  3 22:44:49 2013 florian faisant
** Last update Thu Jun  6 01:06:10 2013 florian faisant
*/

#include	<math.h>
#include	<stdlib.h>
#include	"struct_raytracer.h"
#include	"raytracer.h"
#include	"light.h"
#include	"perlin.h"
#include	"effect.h"

int		check_effect(t_obj *obj, t_coordonne *inter, t_data *data)
{
  int		color;

  color = obj->color;
  if (obj->effect == 1)
    color = effect_damier(inter, color);
  else if (obj->effect == 2)
    color = effect_circle(inter, color);
  else if (obj->effect == 3)
    color = effect_damier_perlin(inter, color, data);
  return (color);
}

double		calc_cos(t_obj *obj, t_coordonne *normal, t_coordonne *inter)
{
  double	y;

  if (obj->def_norme == 1)
    {
      y = normal->y + cos(inter->y / 10) *
	(sqrt(POW(normal->x) + POW(normal->y) + POW(normal->z)) / 10);
      normal->y = y;
    }
  return (normal->x / (normal->y * normal->z));
}
