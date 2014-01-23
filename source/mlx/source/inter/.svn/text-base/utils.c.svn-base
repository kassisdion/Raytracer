/*
** utils.c for utils in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sat May  4 10:32:28 2013 florian faisant
** Last update Mon Jun  3 20:39:00 2013 florian faisant
*/

#include	<math.h>
#include	"raytracer.h"

double		search_res(double a, double b, double d)
{
  double	res1;
  double	res2;

  if (d >= 0.0)
    {
      res1 = (-b - sqrt(d)) / (2 * a);
      res2 = (-b + sqrt(d)) / (2 * a);
      if (res1 < 0.0 && res2 < 0.0)
        return (-1.0);
      else if (res2 < res1 && res2 >= 0.0)
        return (res2);
      else
	return (res1);
    }
  else
    return (FAIL);
}
