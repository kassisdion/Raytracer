/*
** complete_img.c for complete_img in /home/florian/raytracer/source/affichage
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sun Apr  7 20:53:48 2013 florian faisant
** Last update Thu Jun  6 01:44:36 2013 florian faisant
*/

#include	"struct_raytracer.h"
#include	"raytracer.h"
#include	"my.h"

static int	apply_black(int color)
{
  int		new_r;
  int		new_v;
  int		new_b;
  int		c;
  int		total;

  new_r = (color >> 16) & 0xFF;
  new_v = (color >> 8) & 0xFF;
  new_b = (color) & 0xFF;
  total = (new_r + new_v + new_b) / 3;
  new_r = total;
  new_v = total;
  new_b = total;
  c = ((new_r << 16) & 0xFF0000)
    | ((new_v << 8) & 0xFF00)
    | ((new_b) & 0xFF);
  return (c);
}

static int	apply_cyano(int color)
{
  int		new_r;
  int		new_v;
  int		new_b;
  int		c;
  int		total;

  new_r = (color >> 16) & 0xFF;
  new_v = (color >> 8) & 0xFF;
  new_b = (color) & 0xFF;
  total = (new_r + new_v + new_b) / 3;
  new_r = total / 2;
  new_v = total;
  new_b = 255;
  c = ((new_r << 16) & 0xFF0000)
    | ((new_v << 8) & 0xFF00)
    | ((new_b) & 0xFF);
  return (c);
}

static int	apply_sepia(int color)
{
  int		new_r;
  int		new_v;
  int		new_b;
  int		c;
  int		total;

  new_r = (color >> 16) & 0xFF;
  new_v = (color >> 8) & 0xFF;
  new_b = (color) & 0xFF;
  total = (new_r + new_v + new_b) / 3;
  new_r = total / 2 + 112;
  new_v = total / 2 + 66;
  new_b = total / 2 + 20;
  c = ((new_r << 16) & 0xFF0000)
    | ((new_v << 8) & 0xFF00)
    | ((new_b) & 0xFF);
  return (c);
}

void		complete_img(t_data *data, int *tab)
{
  int		x;
  int		y;

  x = 0;
  y = 0;
  while (y != SIZE_WIN_Y)
    {
      while (x != SIZE_WIN_X)
	{
	  if (data->option.negative == 1)
	    tab[y * SIZE_WIN_X + x] = 0xFFFFFF - tab[y * SIZE_WIN_X + x];
	  if (data->option.sepia == 1)
	    tab[y * SIZE_WIN_X + x] = apply_sepia(tab[y * SIZE_WIN_X + x]);
	  if (data->option.cyanotype == 1)
	    tab[y * SIZE_WIN_X + x] = apply_cyano(tab[y * SIZE_WIN_X + x]);
	  if (data->option.black_white == 1)
	    tab[y * SIZE_WIN_X + x] = apply_black(tab[y * SIZE_WIN_X + x]);
	  put_pixel_to_image(&(data->img), x, y, tab[y * SIZE_WIN_X + x]);
	  x++;
	}
      x = 0;
      y++;
    }
}
