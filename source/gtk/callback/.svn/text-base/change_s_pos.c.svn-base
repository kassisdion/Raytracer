/*
** select_item.c for select_item in /home/caron/git/generaytacer/source/gtk/callback
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Tue May 14 18:30:31 2013 Caron Thomas
** Last update Fri May 24 08:59:20 2013 Caron Thomas
*/

#include	<stdlib.h>
#include	<gtk/gtk.h>
#include	"gen.h"
#include	"struct_raytracer.h"

void		change_s_pos_x(GtkWidget *but, gpointer data)
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
    tmp->pos->x = gtk_spin_button_get_value(GTK_SPIN_BUTTON(but));
}

void		change_s_pos_y(GtkWidget *but, gpointer data)
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
    tmp->pos->y = gtk_spin_button_get_value(GTK_SPIN_BUTTON(but));
}

void		change_s_pos_z(GtkWidget *but, gpointer data)
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
    tmp->pos->z = gtk_spin_button_get_value(GTK_SPIN_BUTTON(but));
}
