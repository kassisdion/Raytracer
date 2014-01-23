/*
** init_mlx.C for init_mlx in /home/florian/raytracer/source/init
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Wed Apr  3 15:55:12 2013 florian faisant
** Last update Sat Apr 13 00:32:37 2013 florian faisant
*/

#include	<unistd.h>
#include	"my.h"
#include	"mlx.h"
#include	"raytracer.h"
#include	"struct_raytracer.h"

static int	init_windo(t_windo *windo, int x, int y, char *name)
{
  windo->mlx_ptr = mlx_init();
  if (windo->mlx_ptr == NULL)
    return (FAIL);
  windo->win_ptr = mlx_new_window(windo->mlx_ptr, x, y, name);
  windo->x = x;
  windo->y = y;
  return (SUCCES);
}

static		void init_img(t_img *img, t_windo *windo, int x, int y)
{
  img->img = mlx_new_image(windo->mlx_ptr, x, y);
  img->x = x;
  img->y = y;
  img->data = mlx_get_data_addr(img->img, &(img->bpp), &(img->sizeline),
				&(img->endian));
}

int		init_mlx(t_data *data)
{
  if (init_windo(&(data->windo), SIZE_WIN_X, SIZE_WIN_Y, "raytracer") == -1)
    return (error("Sorry, probleme during the initialisation of Mlx"));
  init_img(&(data->img), &(data->windo), data->windo.x, data->windo.y);
  return (SUCCES);
}
