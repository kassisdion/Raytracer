/*
** update_val.c for update_val in /home/caron/git/generaytacer/source/gtk/draw
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Tue May 14 21:53:53 2013 Caron Thomas
** Last update Tue Jun  4 02:38:31 2013 florian faisant
*/

#include	<gtk/gtk.h>
#include	"calc.h"
#include	"gen.h"
#include	"struct_raytracer.h"
#include	"pos.h"

static int	put_info_two(t_wid *wid, t_obj *obj)
{
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->surface->lim_x[0]),
			    obj->lim_min.x);
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->surface->lim_x[1]),
			    obj->lim_max.x);
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->surface->lim_y[0]),
			    obj->lim_min.y);
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->surface->lim_y[1]),
			    obj->lim_max.y);
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->surface->rayon),
			    obj->rayon);
  gtk_button_set_label(GTK_BUTTON(wid->surface->effect_but),
		       get_effect(obj->effect));
  gtk_range_set_value(GTK_RANGE(wid->surface->brillance),
		      (double)(obj->brillance));
  if (obj->def_norme == 1)
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(wid->surface->def),
				 (TRUE));
  else
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(wid->surface->def),
				 (FALSE));
  return (0);
}

static int	put_info(t_wid *wid, t_obj *obj)
{
  gtk_image_set_from_file(GTK_IMAGE(wid->surface->image),
			  get_image(obj->type));
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->surface->pos[0]), obj->pos.x);
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->surface->pos[1]), obj->pos.y);
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->surface->pos[2]), obj->pos.z);
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->surface->rot[0]),
			    obj->rotation.x);
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->surface->rot[1]),
			    obj->rotation.y);
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->surface->rot[2]),
			    obj->rotation.z);
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->surface->color[0]),
			    ((obj->color >> 16) & 0xff));
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->surface->color[1]),
			    ((obj->color >> 8) & 0xff));
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->surface->color[2]),
			    ((obj->color) & 0xff));
  return (0);
}

t_wid		*update_val(t_wid *wid)
{
  int		id;
  t_list	*tmp;

  id = 0;
  if (wid->data.list == NULL)
    return (wid);
  tmp = wid->data.list;
  while (id != wid->data.obj_id)
    {
      tmp = tmp->next;
      id++;
    }
  if (tmp != NULL)
    {
      put_info(wid, tmp->obj);
      put_info_two(wid, tmp->obj);
    }
  preview_move(&wid->data);
  return (wid);
}
