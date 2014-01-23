/*
** select_item.c for select_item in /home/caron/git/generaytacer/source/gtk/callback
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Tue May 14 18:30:31 2013 Caron Thomas
** Last update Sun Jun  2 22:39:51 2013 Caron Thomas
*/

#include	<stdlib.h>
#include	<gtk/gtk.h>
#include	<string.h>
#include	"gen.h"
#include	"struct_raytracer.h"

void		change_def(GtkWidget *but, gpointer data)
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
    {
      if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(but)))
	tmp->obj->def_norme = 1;
      else
	tmp->obj->def_norme = -1;
    }
}
