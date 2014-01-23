/*
** calc.c for calc in /home/florian/raytracer/source/calc
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Thu Apr  4 09:55:00 2013 florian faisant
** Last update Tue Jun  4 03:10:47 2013 florian faisant
*/

#include	<stdlib.h>
#include	"struct_raytracer.h"
#include	"raytracer.h"
#include	"calc.h"
#include	"my.h"
#include	"affichage.h"
#include	"init.h"
#include	"move.h"
#include	"perlin.h"
#include	"strings.h"

static int	aff_black(t_data *data)
{
  bzero(data->img.data, SIZE_WIN_Y * SIZE_WIN_X * (data->img.bpp / 8));
  aff_image(data);
  return (SUCCES);
}

int		preview_move(t_data *data)
{
  int		x;
  int		y;

  x = 0;
  y = 0;
  aff_black(data);
  rotate(&(data->scene.eyes.pos), &(data->scene.eyes.rotation));
  while (y < data->windo.y)
    {
      x = 0;
      while (x < data->windo.x)
	{
	  put_pixel_to_image(&(data->img), x, y, calc_preview(data, x, y));
	  x += 3;
	}
      y += 3;
    }
  aff_image(data);
  rotate_inv(&(data->scene.eyes.pos), &(data->scene.eyes.rotation));
  return (SUCCES);
}

int		preview(t_data *data)
{
  int		x;
  int		y;

  x = 0;
  y = 0;
  aff_black(data);
  rotate(&(data->scene.eyes.pos), &(data->scene.eyes.rotation));
  while (y < data->windo.y)
    {
      x = 0;
      while (x < data->windo.x)
	{
	  put_pixel_to_image(&(data->img), x, y, calc_preview(data, x, y));
	  x++;
	}
      aff_pourcent(x, y, data);
      y++;
    }
  aff_image(data);
  rotate_inv(&(data->scene.eyes.pos), &(data->scene.eyes.rotation));
  return (SUCCES);
}

int		normal_calc(t_data *data)
{
  int		x;
  int		y;
  int		*tab;

  x = 0;
  y = -1;
  aff_black(data);
  tab = xmalloc(sizeof(int) * (SIZE_WIN_X * SIZE_WIN_Y));
  init_bruit2d(&(data->perlin), PAS, OCTAVES, data);
  rotate(&(data->scene.eyes.pos), &(data->scene.eyes.rotation));
  while (++y < data->windo.y)
    {
      x = -1;
      while (++x < data->windo.x)
	{
	  tab[y * SIZE_WIN_X + x] = first_anti_aliasing(x, y, data);
	  if (data->option.aff_mode == 1)
	    put_pixel_to_image(&(data->img), x, y, tab[y * SIZE_WIN_X + x]);
	}
      aff_pourcent(x, y, data);
    }
  anti_aliasing(tab, data);
  rotate_inv(&(data->scene.eyes.pos), &(data->scene.eyes.rotation));
  free(tab);
  return (SUCCES);
}

int		manage_calc(t_data *data)
{
  if (data->option.preview == 1)
    normal_calc(data);
  else if (data->option.preview == 0)
    preview(data);
  else
    return (error("Sorry, unknow aff option\n"));
  return (SUCCES);
}
