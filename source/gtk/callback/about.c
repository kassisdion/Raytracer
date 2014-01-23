/*
** save.c for save in /home/caron/igraph/generaytacer/source/event
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Fri Apr 26 16:17:44 2013 Caron Thomas
** Last update Fri May  3 13:04:26 2013 Caron Thomas
*/

#include	<gtk/gtk.h>
#include	<unistd.h>
#include	"gen.h"

void		about(GtkWidget *but, gpointer data)
{
  t_wid		*wid;
  GtkWidget	*dial_box;

  wid = (t_wid *)(data);
  dial_box = gtk_message_dialog_new(GTK_WINDOW(wid->win->win),
			 GTK_DIALOG_MODAL, GTK_MESSAGE_INFO,
			 GTK_BUTTONS_OK,
			 ABOUT_US);
  gtk_dialog_run(GTK_DIALOG(dial_box));
  gtk_widget_destroy(dial_box);
}
