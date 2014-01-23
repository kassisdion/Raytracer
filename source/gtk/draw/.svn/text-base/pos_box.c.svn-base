/*
** pos_box.c for pos_box in /home/caron/igraph/generaytacer/source/init
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Thu Apr 25 12:57:05 2013 Caron Thomas
** Last update Tue Jun  4 02:50:50 2013 florian faisant
*/

#include	<gtk/gtk.h>
#include	<stdlib.h>
#include	"gen.h"
#include	"my.h"
#include	"callback.h"
#include	"gtk_func.h"

t_wid		*pos_box(t_wid *wid)
{
  GtkWidget	*box;

  box = gtk_hbox_new(FALSE, 0);
  gtk_box_pack_start(GTK_BOX(wid->win->box),
		     GTK_WIDGET(wid->win->menu_bar), FALSE, FALSE, 0);
  gtk_box_pack_start(GTK_BOX(box),
		   GTK_WIDGET(wid->surface->box), FALSE, FALSE, 0);
  gtk_box_pack_start(GTK_BOX(box),
		     GTK_WIDGET(wid->s_surface->box), TRUE, TRUE, 0);
  gtk_box_pack_start(GTK_BOX(wid->win->box), GTK_WIDGET(box), FALSE, FALSE, 0);
  gtk_box_pack_start(GTK_BOX(wid->win->box),
		   GTK_WIDGET(new_button("Generaytracer",
					 NULL, G_CALLBACK(gen), wid)),
		   FALSE, FALSE, 0);
  gtk_widget_show_all(wid->win->win);
  return (wid);
}
