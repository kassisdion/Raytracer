/*
** perlin_coherent.c for perlin_coherent in /home/florian/git/generaytacer/source/mlx
** 
** Made by florian faisant
** Login   <florian@epitech.net>
** 
** Started on  Sat May 11 14:30:08 2013 florian faisant
** Last update Tue May 14 08:52:09 2013 florian faisant
*/

#include	<math.h>
#include	"struct_raytracer.h"
#include	"perlin.h"

static double	each_interpolation(double a, double b, double x)
{
  double	tmp;

  tmp = (1 - cos(x * M_PI)) / 2;
  return (a * (1 - tmp) + b * tmp);
}

static double	interpolation(t_perlin *perlin, double x, double y)
{
  double	tmp1;
  double	tmp2;

  tmp1 = each_interpolation(perlin->a, perlin->b, x);
  tmp2 = each_interpolation(perlin->c, perlin->d, x);
  return (each_interpolation(tmp1, tmp2, y));
}

static double	lissage_bruit(double x, double y, t_perlin *perlin)
{
  int		i;
  int		j;
  double	pas;

  pas = PAS;
  j = (int)(y / PAS);
  i = (int)(x / PAS);
  perlin->a = bruit_2d(i, j, perlin);
  perlin->b = bruit_2d(i + 1, j, perlin);
  perlin->c = bruit_2d(i, j + 1, perlin);
  perlin->d = bruit_2d(i + 1, j + 1, perlin);
  return (interpolation(perlin, fmod((x / pas), 1), fmod((y / pas), 1)));
}

double		bruit_coherent2d(double x, double y, t_perlin *perlin)
{
  double	somme;
  double	p;
  int		f;
  int		i;
  double	persistance;

  somme = 0.0;
  f = 1;
  p = 1;
  i = 0;
  persistance = 0.5;
  while (i < OCTAVES)
    {
      somme += p * lissage_bruit(x * f, y * f, perlin);
      p *= persistance;
      f *= 2;
      i++;
    }
  return (somme * (1 - persistance) / (1 - p));
}
