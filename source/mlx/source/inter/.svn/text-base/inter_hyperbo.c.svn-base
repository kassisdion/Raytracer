/*
** inter_hyperbo.c for inter_hyperbo in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Fri May 10 21:00:07 2013 florian faisant
** Last update Wed May 22 01:48:05 2013 florian faisant
*/

#include	<math.h>
#include	"struct_raytracer.h"
#include	"raytracer.h"
#include	"inter.h"

double		inter_hyperbo(t_coordonne *vect, t_coordonne *oeil, int rayon)
{
  double	a;
  double	b;
  double	c;
  double	delta;
  double	r;

  r = (double)rayon * (double)M_PI / 180.000;
  a = POW(vect->x) + POW(vect->y) - (POW(vect->z) * POW(tan(r)));
  b = 2 * ((oeil->x * vect->x) + (oeil->y * vect->y))
    - ((2 * oeil->z * vect->z) * (POW(tan(r))));
  c = POW(oeil->x) + POW(oeil->y)
    - (POW(oeil->z) * POW(tan(r))) + (-5000);
  delta = (b * b) - (4 * (a * c));
  return (search_res(a, b, delta));
}

