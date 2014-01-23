/*
** save.c for save in /home/caron/igraph/generaytacer/source/event
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Fri Apr 26 16:17:44 2013 Caron Thomas
** Last update Mon May 20 14:07:39 2013 Caron Thomas
*/

#include	<gtk/gtk.h>

int		info_gtk(char *msg)
{
  GtkWidget	*dial_box;

  dial_box = gtk_message_dialog_new(NULL,
			 GTK_DIALOG_MODAL, GTK_MESSAGE_INFO,
			 GTK_BUTTONS_OK,
			 msg);
  gtk_dialog_run(GTK_DIALOG(dial_box));
  gtk_widget_destroy(dial_box);
  return (0);
}
