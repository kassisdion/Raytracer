/*
** inter_plan.c for inter_plan in /home/florian/git/rt/source/inter
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Tue Apr  9 22:38:08 2013 florian faisant
** Last update Sat May  4 10:47:01 2013 florian faisant
*/

#include	"struct_raytracer.h"
#include	"raytracer.h"

double		inter_plan(t_coordonne *vect, t_coordonne *oeil)
{
  double	k;

  if (vect->z == 0.00001)
    return (-1);
  else
    {
      k = -1 * (oeil->z / vect->z);
      if (k < 0.00001)
        return (FAIL);
    }
  return (k);
}
