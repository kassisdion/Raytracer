/*
** new_select.c for new_select in /home/caron/git/generaytacer/source/gtk/gtk_fuction
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Mon May 13 20:13:01 2013 Caron Thomas
** Last update Tue Jun  4 03:02:16 2013 florian faisant
*/

#include	<gtk/gtk.h>

GtkWidget	*new_select(const gchar *name,
			   GCallback callback, gpointer user_data)
{
  GtkWidget	*button;

  button = gtk_radio_button_new_with_label(NULL, name);
  g_signal_connect(G_OBJECT(button), "clicked",
		   G_CALLBACK(callback), user_data);
  return (button);
}

GtkWidget	*add_select(GtkWidget *dady, const gchar *name,
			    GCallback callback, gpointer user_data)
{
  GtkWidget	*button;

  button = gtk_radio_button_new_with_label_from_widget(GTK_RADIO_BUTTON(dady),
						       name);
  g_signal_connect(G_OBJECT(button), "clicked",
		   G_CALLBACK(callback), user_data);
  return (button);
}
