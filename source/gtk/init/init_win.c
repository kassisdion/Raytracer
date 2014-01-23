/*
** init_win.c for init_win in /home/caron/igraph/generaytacer/source/init
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Wed Apr 24 19:17:35 2013 Caron Thomas
** Last update Mon Jun  3 13:55:12 2013 Caron Thomas
*/

#include	<gtk/gtk.h>
#include	"gen.h"
#include	"my.h"

t_wid		*init_win(t_wid *wid)
{
  wid->win = xmalloc(sizeof(t_win));
  wid->win->win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(wid->win->win), "Generaytracer");
  gtk_window_set_default_size(GTK_WINDOW(wid->win->win), 500, 600);
  gtk_window_set_resizable(GTK_WINDOW(wid->win->win), TRUE);
  gtk_window_set_icon_from_file(GTK_WINDOW(wid->win->win),
				"./resource/logo.png", NULL);
  g_signal_connect(G_OBJECT(wid->win->win), "destroy",
		   G_CALLBACK(gtk_main_quit), NULL);
  wid->win->menu_bar = gtk_menu_bar_new();
  wid->win->box = gtk_vbox_new(FALSE, 0);
  gtk_container_add(GTK_CONTAINER(wid->win->win), GTK_WIDGET(wid->win->box));
  wid->gen = 0;
  wid->open = 0;
  wid->start = 0;
  wid->file.fd = NULL;
  wid->data.wid = wid;
  return (wid);
}
