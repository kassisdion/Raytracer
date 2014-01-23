/*
** new_projet.c for new_projet in /home/caron/igraph/generaytacer/source/event
**
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
**
** Started on  Fri Apr 26 16:00:47 2013 Caron Thomas
** Last update Fri Jun  7 18:41:45 2013 florian faisant
*/

#include	<gtk/gtk.h>
#include	<stdio.h>
#include	"parsing.h"
#include	"raytracer.h"
#include	"struct_raytracer.h"
#include	"gen.h"
#include	"my.h"

void		new_spot(GtkWidget *new_file, gpointer user_data)
{
  t_wid		*wid;
  t_coordonne	*cor;

  cor = xmalloc(sizeof(*cor));
  wid = (t_wid *)(user_data);
  cor->x = 0;
  cor->y = 0;
  cor->z = 0;
  complete_list_spot(&wid->data.spot, 0xffffff, cor, SPOT_POWER);
}
