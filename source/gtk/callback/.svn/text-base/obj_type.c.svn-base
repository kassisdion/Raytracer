/*
** save.c for save in /home/caron/igraph/generaytacer/source/event
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Fri Apr 26 16:17:44 2013 Caron Thomas
** Last update Tue Jun  4 02:39:49 2013 florian faisant
*/

#include	<gtk/gtk.h>
#include	<unistd.h>
#include	"gen.h"
#include	"init_gtk.h"
#include	"pos.h"

void		type_obj(GtkWidget *but, gpointer data)
{
  int		id;
  t_obj_select	*obj;
  t_list	*tmp;

  obj = (t_obj_select *)(data);
  tmp = obj->wid->data.list;
  id = 0;
  while (id != obj->wid->data.obj_id)
    {
      tmp = tmp->next;
      id++;
    }
  if (tmp != NULL)
    tmp->obj->type = obj->type;
  update_val(obj->wid);
  obj->wid->surface->open = 0;
  gtk_widget_destroy(obj->wid->surface->win_obj);

}

void		objtype_ok(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  wid->surface->open = 0;
  gtk_widget_destroy(wid->surface->win_obj);
}

void		objtype(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  if (wid->surface->open == 0)
    {
      init_changetype(wid);
      gtk_widget_show(wid->surface->win_obj);
      wid->surface->open = 1;
    }
}
