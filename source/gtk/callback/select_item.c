/*
** select_item.c for select_item in /home/caron/git/generaytacer/source/gtk/callback
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Tue May 14 18:30:31 2013 Caron Thomas
** Last update Tue Jun  4 02:39:11 2013 florian faisant
*/

#include	<stdlib.h>
#include	<gtk/gtk.h>
#include	"gen.h"
#include	"struct_raytracer.h"
#include	"pos.h"

static int	nbr_obj(t_data *data)
{
  int		nbr;
  t_list	*tmp;

  tmp = data->list;
  nbr = 0;
  while (tmp != NULL)
    {
      nbr++;
      tmp = tmp->next;
    }
  return (nbr - 1);
}

void		select_obj_prev(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  if (wid->open)
    {
      if (wid->data.obj_id <= 0)
	wid->data.obj_id = nbr_obj(&wid->data);
      else
	wid->data.obj_id--;
      update_val(wid);
    }
}

void		select_obj_next(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  if (wid->open)
    {
      if (wid->data.obj_id < nbr_obj(&wid->data))
	wid->data.obj_id++;
      else
	wid->data.obj_id = 0;
      update_val(wid);
    }
}
