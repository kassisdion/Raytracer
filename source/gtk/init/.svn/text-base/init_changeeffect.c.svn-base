/*
** init_changtype.c for init_changtype in /home/caron/git/generaytacer/source/gtk/init
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Mon May 20 17:41:04 2013 Caron Thomas
** Last update Fri Jun  7 17:54:09 2013 Caron Thomas
*/

#include		<gtk/gtk.h>
#include		"gen.h"
#include		"callback.h"
#include		"pos.h"
#include		"gtk_func.h"

static GtkWidget	*init_button(t_wid *wid)
{
  int			i;
  GtkWidget		*box;

  box = gtk_vbox_new(FALSE, 0);
  i = 0;
  while (i < 11)
    {
      wid->surface->effect[i].type = i;
      wid->surface->effect[i].button =
	new_button(get_effect(i), NULL, G_CALLBACK(effect_obj),
		   &wid->surface->effect[i]);
      wid->surface->effect[i].wid = wid;
      if (wid->surface->effect[i].wid != NULL)
        gtk_box_pack_start(GTK_BOX(box),
			   wid->surface->effect[i].button,
			   TRUE, TRUE, 0);
      i++;
    }
  gtk_widget_show(box);
  return (box);
}

t_wid			*init_changeeffect(t_wid *wid)
{
  wid->surface->win_eff = gtk_dialog_new();
  gtk_window_set_title(GTK_WINDOW(wid->surface->win_eff), "Change Effect");
  gtk_window_set_default_size(GTK_WINDOW(wid->surface->win_eff), 250, 200);
  g_signal_connect(G_OBJECT(wid->surface->win_eff), "destroy",
		   G_CALLBACK(objeffect_ok), wid);
  gtk_box_pack_start(GTK_BOX(GTK_DIALOG(wid->surface->win_eff)->vbox),
		     init_button(wid), TRUE, TRUE, 0);
  return (0);
}
