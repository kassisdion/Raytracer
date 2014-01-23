/*
** gestion_event.c for gestion_event in /home/florian/raytracer/source/gestion_event
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sun Apr  7 20:35:47 2013 florian faisant
** Last update Tue Jun  4 13:40:55 2013 florian faisant
*/

#include	<X11/X.h>
#include	<mlx.h>
#include	<stdlib.h>
#include	"raytracer.h"
#include	"struct_raytracer.h"
#include	"affichage.h"
#include	"my.h"
#include	"calc.h"
#include	"move.h"
#include	"utils.h"

static int	other_key(int keycode, t_data *data)
{
  if (keycode == EXIT)
    {
      mlx_destroy_window(data->windo.mlx_ptr, data->windo.win_ptr);
      exit(1);
    }
  else if (keycode == DEZOOM)
    {
      data->scene.eyes.pos.x += 100;
      preview_move(data);
    }
  else if (keycode == ZOOM)
    {
      data->scene.eyes.pos.x -= 100;
      preview_move(data);
    }
  else if (keycode == LEFT)
    {
      data->scene.eyes.pos.y += 100;
      preview_move(data);
    }
  return (SUCCES);
}

static int	gestion_key(int keycode, t_data *data)
{
  data->update = 1;
  if (keycode == RIGHT)
    {
      data->scene.eyes.pos.y -= 100;
      preview_move(data);
    }
  else if (keycode == UP)
    {
      data->scene.eyes.pos.z -= 100;
      preview_move(data);
    }
  else if (keycode == DOWN)
    {
      data->scene.eyes.pos.z += 100;
      preview_move(data);
    }
  else if (keycode == SPACE)
    preview(data);
  else if (keycode == ENTER)
    normal_calc(data);
  else
    other_key(keycode, data);
  data->update = 0;
  return (SUCCES);
}

static int	gestion_expose(t_data *data)
{
  aff_image(data);
  return (SUCCES);
}

static int	check_update(t_data *data)
{
  if (data->update == 1)
    {
      manage_calc(data);
      data->update = 0;
    }
  return (0);
}

void		gestion_event(t_data *data)
{
  mlx_expose_hook(data->windo.win_ptr, &gestion_expose, data);
  mlx_hook(data->windo.win_ptr, KeyPress,
	   KeyPressMask, &gestion_key, data);
  mlx_loop_hook(data->windo.mlx_ptr, check_update, data);
  mlx_loop(data->windo.mlx_ptr);
}
