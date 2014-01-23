/*
** init_changtype.c for init_changtype in /home/caron/git/generaytacer/source/gtk/init
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Mon May 20 17:41:04 2013 Caron Thomas
** Last update Tue Jun  4 02:47:59 2013 florian faisant
*/

#include		<gtk/gtk.h>
#include		"gen.h"
#include		"callback.h"
#include		"pos.h"
#include		"gtk_func.h"

static GtkWidget	*init_button(t_wid *wid)
{
  int			nb_box;
  int			i;
  GtkWidget		*box[3];

  i = 0;
  nb_box = 0;
  box[0] = gtk_hbox_new(FALSE, 0);
  box[1] = gtk_hbox_new(FALSE, 0);
  while (i < 6)
    {
      wid->surface->objselect[i].type = i + 1;
      wid->surface->objselect[i].button =
	new_button(NULL, get_image(i + 1), G_CALLBACK(type_obj),
		   &wid->surface->objselect[i]);
      wid->surface->objselect[i].wid = wid;
      if (wid->surface->objselect[i].wid != NULL)
	gtk_box_pack_start(GTK_BOX(box[nb_box]),
			   wid->surface->objselect[i++].button,
			   TRUE, TRUE, 0);
      if ((i % 3) == 0)
	nb_box++;
    }
  gtk_widget_show(box[0]);
  gtk_widget_show(box[1]);
  return (unit_vbox(box, nb_box, FALSE, 0));
}

t_wid			*init_changetype(t_wid *wid)
{
  wid->surface->win_obj = gtk_dialog_new();
  gtk_window_set_title(GTK_WINDOW(wid->surface->win_obj), "Change Type");
  g_signal_connect(G_OBJECT(wid->surface->win_obj), "destroy",
		   G_CALLBACK(objtype_ok), wid);
  gtk_box_pack_start(GTK_BOX(GTK_DIALOG(wid->surface->win_obj)->vbox),
		     init_button(wid), TRUE, TRUE, 0);
  return (0);
}
