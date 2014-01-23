/*
** new_frame.c for new_frame in /home/caron/igraph/generaytacer/source/init
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Mon Apr 29 10:17:33 2013 Caron Thomas
** Last update Sat Jun  1 16:15:28 2013 Caron Thomas
*/

#include	<gtk/gtk.h>

GtkWidget	*new_frame_hscale(const gchar *name,
				  GCallback callback, int size,
				  gpointer user_data)
{
  GtkWidget	*widget;
  GtkWidget	*frame;

  frame = gtk_frame_new(name);
  widget = gtk_hscale_new_with_range(0, size, 1);
  g_signal_connect(G_OBJECT(widget), "value-changed", callback, user_data);
  gtk_container_add(GTK_CONTAINER(frame), widget);
  gtk_widget_show(widget);
  gtk_widget_show(frame);
  return (frame);
}

GtkWidget	*new_frame_entry(const gchar *name,
				  GCallback callback, gpointer user_data)
{
  GtkWidget	*widget;
  GtkWidget	*frame;

  frame = gtk_frame_new(name);
  widget = gtk_entry_new();
  g_signal_connect(G_OBJECT(widget), "activate", callback, user_data);
  gtk_container_add(GTK_CONTAINER(frame), widget);
  gtk_widget_show(widget);
  gtk_widget_show(frame);
  return (frame);
}
