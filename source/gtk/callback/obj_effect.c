/*
** save.c for save in /home/caron/igraph/generaytacer/source/event
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Fri Apr 26 16:17:44 2013 Caron Thomas
** Last update Tue Jun  4 02:37:26 2013 florian faisant
*/

#include	<gtk/gtk.h>
#include	<unistd.h>
#include	"gen.h"
#include	"init_gtk.h"
#include	"pos.h"

void		effect_obj(GtkWidget *but, gpointer data)
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
    tmp->obj->effect = obj->type;
  update_val(obj->wid);
  obj->wid->surface->open_eff = 0;
  gtk_widget_destroy(obj->wid->surface->win_eff);
}

void		objeffect_ok(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  wid->surface->open_eff = 0;
  gtk_widget_destroy(wid->surface->win_eff);
}

void		objeffect(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  if (wid->surface->open_eff == 0)
    {
      init_changeeffect(wid);
      gtk_widget_show(wid->surface->win_eff);
      wid->surface->open_eff = 1;
    }
}
