/*
** init_thread.c for init_thread in /home/florian/git/generaytacer/source/gtk/init
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Mon May 13 17:36:52 2013 florian faisant
** Last update Thu Jun  6 01:45:09 2013 florian faisant
*/

#include	<glib.h>
#include	<gtk/gtk.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	<pthread.h>
#include	"struct_raytracer.h"
#include	"init.h"
#include	"gestion_event.h"
#include	"raytracer.h"
#include	"texture.h"

gboolean	check_update(gpointer param)
{
  t_data	*data;

  data = (t_data *)param;
  if (data->update == 1)
    {
      while (data->update == 1)
	{
	  usleep(200);
	}
    }
  return (TRUE);
}

static void	init_data(t_data *data)
{
  data->list = NULL;
  data->spot = NULL;
  data->option.first_aa = FIRST_ANTI_ALIASING;
  data->option.final_aa = ANTI_ALIASING;
  data->option.preview = 1;
  data->option.aff_mode = 2;
  data->option.negative = 0;
  data->option.sepia = 0;
  data->option.black_white = 0;
  data->option.cyanotype = 0;
  data->update = 0;
  data->texture.activate = 0;
  data->perlin.activate = 0;
  load_texture(data);
}

static void	*start_event(void *data)
{
  t_data	*d;

  d = (t_data *)data;
  gestion_event(d);
  return (NULL);
}

void		init_thread(t_data *data)
{
  pthread_t	thr1;

  init_mlx(data);
  init_data(data);
  pthread_create(&thr1, NULL, start_event, data);
  gtk_timeout_add(100, (GtkFunction)check_update, (void *)data);
}
