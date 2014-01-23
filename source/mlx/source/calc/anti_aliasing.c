/*
** anti_aliasing.c for anti_aliasing in /home/florian/raytracer/source/calc
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sun Apr  7 20:12:21 2013 florian faisant
** Last update Wed Jan 22 17:13:56 2014 florian faisant
*/

#include	<stdlib.h>
#include	"raytracer.h"
#include	"affichage.h"
#include	"my.h"
#include	"struct_raytracer.h"

static int	make_new_color(int *tab, int x, int y)
{
  int		new_r;
  int		new_v;
  int		new_b;
  int		i;
  int		j;

  new_r = 0;
  new_v = 0;
  new_b = 0;
  i = -2;
  while (++i <= 1)
    {
      j = -2;
      while (++j <= 1)
	{
	  new_r += (tab[(y + i) * SIZE_WIN_X + (x + j)] >> 16) & 0xFF;
	  new_v += (tab[(y + i) * SIZE_WIN_X + (x + j)] >> 8) & 0xFF;
	  new_b += tab[(y + i) * SIZE_WIN_X + (x + j)] & 0xFF;
	}
    }
  return ((((new_r / 9) << 16) & 0xff0000)
	  | (((new_v / 9) << 8) & 0xff00)
	  | ((new_b / 9) & 0xff));
}

static int	apply_color(int ex_color, int new_color)
{
  int		new_r;
  int		new_v;
  int		new_b;
  int		total;

  if (BURNED_SHADOW == 1)
    {
      new_r = ((new_color) & 0xFF);
      new_v = ((new_color >> 8) & 0xFF);
      new_b = ((new_color >> 16) & 0xFF);
      total = new_r + new_v + new_b;
      if (abs(total) < 200)
	return (new_color);
    }
  new_r = ((ex_color) & 0xFF) - ((new_color) & 0xFF);
  new_v = ((ex_color >> 8) & 0xFF) - ((new_color >> 8) & 0xFF);
  new_b = ((ex_color >> 16) & 0xFF) - ((new_color >> 16) & 0xFF);
  total = abs(new_r) + abs(new_v) + abs(new_b);
  if (total > ANTI_POWER)
    return (new_color);
  return (ex_color);
}

static void	calc_anti_aliasing(int *tab1, int *tab2, t_data *data)
{
  int		x;
  int		y;
  int		new_color;
  int		color;

  x = 1;
  y = 1;
  while (y < SIZE_WIN_Y - 1)
    {
      while (x < SIZE_WIN_X - 1)
	{
	  color = make_new_color(tab1, x, y);
	  new_color = apply_color(tab1[y * SIZE_WIN_X + x], color);
	  put_pixel_to_image(&(data->img), x, y, new_color);
	  tab2[y * SIZE_WIN_X + x] = new_color;
	  x++;
	}
      x = 1;
      y++;
    }
}

void		anti_aliasing(int *tab1, t_data *data)
{
  int		i;
  int		*tab2;
  int		*tmp;

  i = 0;
  tab2 = xmalloc(sizeof(int) * (SIZE_WIN_X * SIZE_WIN_Y));
  while (i < data->option.final_aa)
    {
      calc_anti_aliasing(tab1, tab2, data);
      tmp = tab1;
      tab1 = tab2;
      tab2 = tmp;
      i++;
    }
  complete_img(data, tab1);
  aff_image(data);
}
