/*
** select_item.c for select_item in /home/caron/git/generaytacer/source/gtk/callback
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Tue May 14 18:30:31 2013 Caron Thomas
** Last update Sun Jun  2 22:40:56 2013 Caron Thomas
*/

#include	<stdlib.h>
#include	<gtk/gtk.h>
#include	"gen.h"
#include	"struct_raytracer.h"

void		change_limxs(GtkWidget *but, gpointer data)
{
  int		id;
  t_wid		*wid;
  t_list	*tmp;

  wid = (t_wid *)(data);
  tmp = wid->data.list;
  id = 0;
  while (id != wid->data.obj_id)
    {
      tmp = tmp->next;
      id++;
    }
  if (tmp != NULL)
    tmp->obj->lim_min.x = gtk_spin_button_get_value(GTK_SPIN_BUTTON(but));
}

void		change_limxe(GtkWidget *but, gpointer data)
{
  int		id;
  t_wid		*wid;
  t_list	*tmp;

  wid = (t_wid *)(data);
  tmp = wid->data.list;
  id = 0;
  while (id != wid->data.obj_id)
    {
      tmp = tmp->next;
      id++;
    }
  if (tmp != NULL)
    tmp->obj->lim_max.x = gtk_spin_button_get_value(GTK_SPIN_BUTTON(but));
}

void		change_limys(GtkWidget *but, gpointer data)
{
  int		id;
  t_wid		*wid;
  t_list	*tmp;

  wid = (t_wid *)(data);
  tmp = wid->data.list;
  id = 0;
  while (id != wid->data.obj_id)
    {
      tmp = tmp->next;
      id++;
    }
  if (tmp != NULL)
    tmp->obj->lim_min.y = gtk_spin_button_get_value(GTK_SPIN_BUTTON(but));
}

void		change_limye(GtkWidget *but, gpointer data)
{
  int		id;
  t_wid		*wid;
  t_list	*tmp;

  wid = (t_wid *)(data);
  tmp = wid->data.list;
  id = 0;
  while (id != wid->data.obj_id)
    {
      tmp = tmp->next;
      id++;
    }
  if (tmp != NULL)
    tmp->obj->lim_max.y = gtk_spin_button_get_value(GTK_SPIN_BUTTON(but));
}
