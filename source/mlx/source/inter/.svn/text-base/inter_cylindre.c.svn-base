/*
** inter_cylindre.c for inter_cylindre in /home/florian/git/rt/source/inter
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Tue Apr  9 22:48:25 2013 florian faisant
** Last update Wed May 22 01:49:35 2013 florian faisant
*/

#include	<math.h>
#include	"struct_raytracer.h"
#include	"raytracer.h"
#include	"inter.h"

double		inter_cylindre(t_coordonne *vect, t_coordonne *oeil, int rayon)
{
  double	a;
  double	b;
  double	c;
  double	delta;
  double	r;

  r = (double)(rayon);
  a = POW(vect->x) + POW(vect->y);
  b = 2 * ((oeil->x * vect->x) + (oeil->y * vect->y));
  c = POW(oeil->x) + POW(oeil->y) - POW(r);
  delta = (b * b) - (4 * (a * c));
  return (search_res(a, b, delta));
}
