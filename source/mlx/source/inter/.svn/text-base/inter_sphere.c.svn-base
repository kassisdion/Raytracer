/*
** inter_sphere.c for inter_sphere in /home/florian/git/rt/source/inter
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Tue Apr  9 22:44:02 2013 florian faisant
** Last update Wed May 22 01:49:12 2013 florian faisant
*/

#include	<math.h>
#include	"struct_raytracer.h"
#include	"raytracer.h"
#include	"inter.h"

double		inter_sphere(t_coordonne *vect, t_coordonne *oeil, int rayon)
{
  double	a;
  double	b;
  double	c;
  double	delta;
  double	r;

  r = (double)(rayon);
  a = POW(vect->x) + POW(vect->y) + POW(vect->z);
  b = 2 * ((oeil->x * vect->x) + (oeil->y * vect->y)
	   + (oeil->z * vect->z));
  c = POW(oeil->x) + POW(oeil->y) + POW(oeil->z) - POW(r);
  delta = (b * b) - (4 * (a * c));
  return (search_res(a, b, delta));
}
