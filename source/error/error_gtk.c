/*
** error_gtk.c for error_gtk in /home/caron/igraph/generaytacer/source/error
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Fri May  3 09:23:12 2013 Caron Thomas
** Last update Fri May  3 21:42:47 2013 Caron Thomas
*/

#include	<gtk/gtk.h>
#include	"gen.h"

int		error_gtk(char *msg)
{
  GtkWidget		*dialbox;

  dialbox = gtk_message_dialog_new(NULL,
				   GTK_DIALOG_MODAL, GTK_MESSAGE_ERROR,
				   GTK_BUTTONS_OK, msg);
  gtk_dialog_run(GTK_DIALOG(dialbox));
  gtk_widget_destroy(dialbox);
  return (-1);
}
