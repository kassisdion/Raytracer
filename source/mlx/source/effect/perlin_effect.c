/*
** perlin_effect.c for perlin_effect in /home/florian/git/rt/source/effect
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Fri May 10 15:12:22 2013 florian faisant
** Last update Tue Jun  4 03:12:30 2013 florian faisant
*/

#include	<stdlib.h>
#include	"struct_raytracer.h"
#include	"raytracer.h"

static int	make_perlin_color(double x, double y, t_perlin *perlin)
{
  int		color;
  double	value;
  int		index;

  index = (abs((int) y) * SIZE_WIN_X + abs((int) x)) % (perlin->x * perlin->y);
  value = perlin->perlin_tab[index];
  value = (((value + 1.00) * 0.5) * 255);
  color = (((int)value << 16) & 0xFF0000)
    | (((int)value << 8) & 0xFF00)
    | (((int)value) & 0xFF);
  return (color);
}

int		effect_damier_perlin(t_coordonne *inter, int color,
				     t_data *data)
{
  int		new_color;

  new_color = color;
  if ((inter->x >= 0.0 && inter->y >= 0.0)
      || (inter->x < 0.0 && inter->y < 0.0))
    {
      if ((int)abs(inter->x) % 100 <= 50 && (int)abs(inter->y) % 100 <= 50)
	new_color = make_perlin_color(inter->x, inter->y, &data->perlin);
      else if ((int)abs(inter->x) % 100 > 50 && (int)abs(inter->y) % 100 > 50)
	new_color = make_perlin_color(inter->x, inter->y, &data->perlin);
    }
  else
    {
      if ((int)abs(inter->x) % 100 <= 50 && (int)abs(inter->y) % 100 <= 50)
	new_color = color;
      else if ((int)abs(inter->x) % 100 > 50 && (int)abs(inter->y) % 100 > 50)
	new_color = color;
      else
	new_color = make_perlin_color(inter->x, inter->y, &data->perlin);
    }
  return (new_color);
}

int		make_perlin_font(double density)
{
  int		r;
  int		v;
  int		b;
  int		color;

  r = 255 * (1 - density) + 0 * density;
  v = 255 * (1 - density) + 0 * density;
  b = 255 * (1 - density) + 255 * density;
  color = ((r << 16) & 0xFF0000)
    | ((v << 8) & 0xFF00)
    | (b & 0xFF);
  return (color);
}
