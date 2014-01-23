/*
** inter_cone.c for inter_cone in /home/florian/git/rt/source/inter
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sun Apr 14 15:17:01 2013 florian faisant
** Last update Tue May 28 19:36:59 2013 florian faisant
*/

#include	<math.h>
#include	"struct_raytracer.h"
#include	"raytracer.h"
#include	"inter.h"

double		inter_cone(t_coordonne *vect, t_coordonne *oeil, int rayon)
{
  double	a;
  double	b;
  double	c;
  double	delta;
  double	r;

  r = (double)rayon * (double)M_PI / 180.000;
  a = POW(vect->x)
    + POW(vect->y)
    - (POW(vect->z) * (POW(tan(r))));
  b = (2 * oeil->x * vect->x)
    + (2 * oeil->y * vect->y)
    - ((2 * oeil->z * vect->z) * POW(tan(r)));
  c = POW(oeil->x)
    + POW(oeil->y)
    - (POW(oeil->z) * POW(tan(r)));
  delta = (b * b) - (4 * (a * c));
  return (search_res(a, b, delta));
}
