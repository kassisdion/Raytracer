/*
** first_anti_aliasing.c for first_anti_aliasing in /home/florian/git/rt/source/calc
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Tue May  7 01:58:48 2013 florian faisant
** Last update Wed Jan 22 17:12:49 2014 florian faisant
*/

#include	"struct_raytracer.h"
#include	"raytracer.h"
#include	"calc.h"
#include	"perlin.h"

int		add_color(int color1, int color2)
{
  int		new_r;
  int		new_v;
  int		new_b;
  int		new_color;

  new_r = (((color1 >> 16) & 0xFF) + ((color2 >> 16) & 0xFF)) / 2;
  new_v = (((color1 >> 8) & 0xFF) + ((color2 >> 8) & 0xFF)) / 2 ;
  new_b = (((color1) & 0xFF) + ((color2) & 0xFF)) / 2;
  new_color = ((new_r << 16) & 0xFF0000)
    | ((new_v << 8) & 0xFF00)
    | ((new_b) & 0xFF);
  return (new_color);
}

int		first_anti_aliasing(int x, int y, t_data *data)
{
  double	i;
  double	j;
  int		tmp;
  int		color;

  color = -1;
  i = (double)x;
  while (i < (double)(x + 1))
    {
      j = (double)y;
      while (j < (double)(y + 1))
	{
	  if (color == -1)
	    color = calc(data, i, j);
	  else
	    {
	      tmp = calc(data, i, j);
	      color = add_color(tmp, color);
	    }
	  j += 1.000 / data->option.first_aa;
	}
      i += 1.000 / data->option.first_aa;
    }
  return (color);
}
