/*
** each_effect.c for each_effect in /home/florian/git/rt/source/effect
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Thu May  9 18:13:07 2013 florian faisant
** Last update Tue Jun  4 03:11:39 2013 florian faisant
*/

#include	<stdlib.h>
#include	<math.h>
#include	"struct_raytracer.h"
#include	"raytracer.h"
#include	"light.h"

int		effect_damier(t_coordonne *inter, int color)
{
  int		new_color;

  new_color = color;
  if ((inter->x >= 0.0 && inter->y >= 0.0)
      || (inter->x < 0.0 && inter->y < 0.0))
    {
      if ((int)abs(inter->x) % 100 <= 50 && (int)abs(inter->y) % 100 <= 50)
	new_color = 0xFFFFFF;
      else if ((int)abs(inter->x) % 100 > 50 && (int)abs(inter->y) % 100 > 50)
	new_color = 0xFFFFFF;
    }
  else
    {
      if ((int)abs(inter->x) % 100 <= 50 && (int)abs(inter->y) % 100 <= 50)
	new_color = color;
      else if ((int)abs(inter->x) % 100 > 50 && (int)abs(inter->y) % 100 > 50)
	new_color = color;
      else
	new_color = 0xFFFFFF;
    }
  return (new_color);
}

int		effect_circle(t_coordonne *inter, int color)
{
  int		new_color;
  double	d;

  new_color = color;
  d = sqrt(POW(inter->x) + POW(inter->y));
  if ((int)d % 100 < 50)
    new_color = remove_light(&color);
  return (new_color);
}
