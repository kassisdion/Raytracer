/*
** update_val.c for update_val in /home/caron/git/generaytacer/source/gtk/draw
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Tue May 14 21:53:53 2013 Caron Thomas
** Last update Fri Jun  7 22:56:09 2013 Caron Thomas
*/

#include	<gtk/gtk.h>
#include	"gen.h"
#include	"struct_raytracer.h"

static int	put_info(t_wid *wid, t_spot *obj)
{
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->s_surface->pos[0]),
			    obj->pos->x);
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->s_surface->pos[1]),
			    obj->pos->y);
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->s_surface->pos[2]),
			    obj->pos->z);
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->s_surface->color[0]),
			    ((obj->color >> 16) & 0xff));
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->s_surface->color[1]),
			    ((obj->color >> 8) & 0xff));
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->s_surface->color[2]),
			    ((obj->color) & 0xff));
  gtk_range_set_value(GTK_RANGE(wid->s_surface->power),
			    (double)(obj->power));
  return (0);
}

t_wid		*update_val_spot(t_wid *wid)
{
  int		id;
  t_spot	*tmp;

  id = 0;
  if (wid->data.spot == NULL)
    return (wid);
  tmp = wid->data.spot;
  while (id != wid->spot_id)
    {
      tmp = tmp->next;
      id++;
    }
  if (tmp != NULL)
    put_info(wid, tmp);
  return (wid);
}
