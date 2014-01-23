/*
** new_button.c for new_button in /home/caron/igraph/generaytacer/source/gtk/gtk_fuction
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Mon May  6 17:12:33 2013 Caron Thomas
** Last update Sun Jun  2 23:12:57 2013 Caron Thomas
*/

#include	<gtk/gtk.h>
#include	<stdlib.h>

GtkWidget	*new_button(const gchar *name, const char *filename,
			    GCallback callback, gpointer user_data)
{
  GtkWidget	*button;
  GtkImage	*image;

  if (name != NULL && filename == NULL)
    button = gtk_button_new_with_label(name);
  else if (name != NULL && filename != NULL)
    {
      image = (GtkImage *)gtk_image_new_from_file(filename);
      button = gtk_button_new_with_label(name);
      gtk_button_set_image(GTK_BUTTON(button), GTK_WIDGET(image));
    }
  else if (name == NULL && filename != NULL)
    {
      image = (GtkImage *)gtk_image_new_from_file(filename);
      button = gtk_button_new();
      gtk_button_set_image(GTK_BUTTON(button), GTK_WIDGET(image));
    }
  else
    button = gtk_button_new();
  g_signal_connect(G_OBJECT(button), "clicked", callback, user_data);
  gtk_widget_show(button);
  return (button);
}
