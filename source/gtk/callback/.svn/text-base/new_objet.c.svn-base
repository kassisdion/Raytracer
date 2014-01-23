/*
** new_projet.c for new_projet in /home/caron/igraph/generaytacer/source/event
**
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
**
** Started on  Fri Apr 26 16:00:47 2013 Caron Thomas
** Last update Mon May 27 17:55:36 2013 florian faisant
*/

#include	<gtk/gtk.h>
#include	<stdio.h>
#include	"raytracer.h"
#include	"struct_raytracer.h"
#include	"gen.h"
#include	"my.h"

static t_obj	*get_obj()
{
  t_obj		*obj;

  obj = xmalloc(sizeof(*obj));
  obj->type = SPHERE;
  obj->pos.x = 0;
  obj->pos.y = 0;
  obj->pos.z = 0;
  obj->color = 0x000000;
  obj->rayon = 50;
  obj->effect = -1;
  obj->def_norme = -1;
  obj->brillance = 1;
  obj->lim_min.x = 0;
  obj->lim_min.y = 0;
  obj->lim_min.z = 0;
  obj->lim_max.x = 0;
  obj->lim_max.y = 0;
  obj->lim_max.z = 0;
  return (obj);
}

void		new_objet(GtkWidget *new_file, gpointer user_data)
{
  t_wid		*wid;
  t_obj		*new_obj;

  wid = (t_wid *)(user_data);
  new_obj = get_obj();
  my_put_in_list(&(wid->data.list), new_obj);
}
