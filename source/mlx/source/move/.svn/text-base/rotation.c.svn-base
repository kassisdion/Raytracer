/*
** rotation.c for rotate in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <florian@epitech.net>
** 
** Started on  Mon May  6 01:04:55 2013 florian faisant
** Last update Tue Jun  4 03:16:18 2013 florian faisant
*/

#include	<math.h>
#include	"struct_raytracer.h"

void		rotate_z(double *x, double *y, double *z, double a)
{
  double	tmpx;
  double	tmpy;
  double	tmpz;

  if (a != 0.0)
    {
      a = (a * 3.141592654 ) / 180;
      tmpx = ((*x) * cos(a)) + ((*y) * -sin(a)) + ((*z) * 0.0);
      tmpy = ((*x) * sin(a)) + ((*y) * cos(a)) + ((*z) * 0.0);
      tmpz = ((*x) * 0.0) + ((*y) * 0.0) + ((*z) * 1.0);
      *x = tmpx;
      *y = tmpy;
      *z = tmpz;
    }
}

void		rotate_y(double *x, double *y, double *z, double a)
{
  double	tmpx;
  double	tmpy;
  double	tmpz;

  if (a != 0.0)
    {
      a = (a * 3.141592654 ) / 180;
      tmpx = ((*x) * cos(a)) + ((*y) * 0.0) + ((*z) * sin(a));
      tmpy = ((*x) * 0.0) + ((*y) * 1.0) + ((*z) * 0.0);
      tmpz = ((*x) * -sin(a)) + ((*y) * 0.0) + ((*z) * cos(a));
      *x = tmpx;
      *y = tmpy;
      *z = tmpz;
    }
}

void		rotate_x(double *x, double *y, double *z, double a)
{
  double	tmpx;
  double	tmpy;
  double	tmpz;

  if (a != 0.0)
    {
      a = (a * 3.141592654 ) / 180;
      tmpx = ((*x) * 1.0) + ((*y) * 0.0) + ((*z) * 0.0);
      tmpy = ((*x) * 0.0) + ((*y) * cos(a)) + ((*z) * -sin(a));
      tmpz = ((*x) * 0.0) + ((*y) * sin(a)) + ((*z) * cos(a));
      *x = tmpx;
      *y = tmpy;
      *z = tmpz;
    }
}

void		rotate(t_coordonne *vec, t_coordonne *data)
{
  rotate_z(&vec->x, &vec->y, &vec->z, data->z);
  rotate_y(&vec->x, &vec->y, &vec->z, data->y);
  rotate_x(&vec->x, &vec->y, &vec->z, data->x);
}

void		rotate_inv(t_coordonne *vec, t_coordonne *data)
{
  rotate_x(&vec->x, &vec->y, &vec->z, -(data->x));
  rotate_y(&vec->x, &vec->y, &vec->z, -(data->y));
  rotate_z(&vec->x, &vec->y, &vec->z, -(data->z));
}
