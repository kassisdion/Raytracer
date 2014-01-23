/*
** select_item.c for select_item in /home/caron/git/generaytacer/source/gtk/callback
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Tue May 14 18:30:31 2013 Caron Thomas
** Last update Fri Jun  7 22:55:58 2013 Caron Thomas
*/

#include	<stdlib.h>
#include	<gtk/gtk.h>
#include	"gen.h"
#include	"struct_raytracer.h"

void		change_s_power(GtkWidget *but, gpointer data)
{
  int		id;
  t_wid		*wid;
  t_spot	*tmp;

  wid = (t_wid *)(data);
  tmp = wid->data.spot;
  id = 0;
  while (id != wid->spot_id)
    {
      tmp = tmp->next;
      id++;
    }
  if (tmp != NULL)
    tmp->power = (int)(gtk_range_get_value(GTK_RANGE(but)));
  wid->in_gen = 0;
}
