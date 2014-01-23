/*
** select_item.c for select_item in /home/caron/git/generaytacer/source/gtk/callback
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Tue May 14 18:30:31 2013 Caron Thomas
** Last update Tue Jun  4 02:39:28 2013 florian faisant
*/

#include	<stdlib.h>
#include	<gtk/gtk.h>
#include	"gen.h"
#include	"struct_raytracer.h"
#include	"pos.h"

static int	nbr_spot(t_data *data)
{
  int		nbr;
  t_spot	*tmp;

  tmp = data->spot;
  nbr = 0;
  while (tmp != NULL)
    {
      nbr++;
      tmp = tmp->next;
    }
  return (nbr - 1);
}

void		select_spot_prev(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  if (wid->open)
    {
      if (wid->spot_id <= 0)
	wid->spot_id = nbr_spot(&wid->data);
      else
	wid->spot_id--;
      update_val_spot(wid);
    }
}

void		select_spot_next(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  if (wid->open)
    {
      if (wid->spot_id < nbr_spot(&wid->data))
	wid->spot_id++;
      else
	wid->spot_id = 0;
      update_val_spot(wid);
    }
}
