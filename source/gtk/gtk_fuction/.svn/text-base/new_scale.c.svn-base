/*
** new_scale.c for new_scale in /home/caron/git/generaytacer/source/gtk/gtk_fuction
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Mon May 20 11:47:52 2013 Caron Thomas
** Last update Tue Jun  4 03:01:20 2013 florian faisant
*/

#include	<gtk/gtk.h>

GtkWidget	*new_hscale(int pas, int max, GCallback callback,
			    gpointer user_data)
{
  GtkWidget	*scale;

  scale = gtk_hscale_new_with_range(0, max, pas);
  g_signal_connect(G_OBJECT(scale), "value-changed", callback, user_data);
  return (scale);
}

GtkWidget	*new_vscale(int pas, int max, GCallback callback,
			    gpointer user_data)
{
  GtkWidget	*scale;

  scale = gtk_vscale_new_with_range(0, max, pas);
  g_signal_connect(G_OBJECT(scale), "value-changed", callback, user_data);
  return (scale);
}
