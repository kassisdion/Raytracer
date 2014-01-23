/*
** new_check_button.c for new_check_button in /home/caron/git/generaytacer/source/gtk/gtk_fuction
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Thu May 23 10:37:03 2013 Caron Thomas
** Last update Thu Jun  6 13:12:54 2013 Caron Thomas
*/

#include	<gtk/gtk.h>

GtkWidget	*new_check_button(const gchar *name, int def,
				  GCallback callback, gpointer data)
{
  GtkWidget	*button;

  button = gtk_check_button_new_with_label(name);
  g_signal_connect(G_OBJECT(button), "clicked", callback, data);
  if (def == 1)
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(button),
				 (TRUE));
  else
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(button),
				 (FALSE));
  gtk_widget_show(button);
  return (button);
}
