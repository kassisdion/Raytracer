/*
** inter_parabo.c for inter_parabo in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sat May  4 10:34:06 2013 florian faisant
** Last update Wed May 22 01:52:39 2013 florian faisant
*/

#include	<math.h>
#include	"struct_raytracer.h"
#include	"raytracer.h"
#include	"inter.h"

double		inter_parabo(t_coordonne *vect, t_coordonne *oeil, int rayon)
{
  double	a;
  double	b;
  double	c;
  double	delta;
  double	r;

  r = (double)rayon * (double)M_PI / 180.000;
  a = POW(vect->x) + POW(vect->y);
  b =  2 * ((oeil->x * vect->x) + (oeil->y * vect->y)) - (r * vect->z);
  c = POW(oeil->x) + POW(oeil->y) - (r * oeil->z);
  delta = (b * b) - (4 * (a * c));
  return (search_res(a, b, delta));
}
