/*
** new_sprin.c for new_sprin in /home/caron/git/generaytacer/source/gtk/gtk_fuction
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Wed May 15 01:09:56 2013 Caron Thomas
** Last update Mon May 20 13:02:01 2013 Caron Thomas
*/

#include	<gtk/gtk.h>

GtkWidget	*new_spin(int min, int max, GCallback callback,
			  gpointer user_data)
{
  GtkWidget	*spin;

  spin = gtk_spin_button_new_with_range(min, max, 0.1);
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(spin), 0.0);
  g_signal_connect(G_OBJECT(spin), "value-changed", callback, user_data);
  gtk_widget_show(spin);
  return (spin);
}

GtkWidget	*new_spin_color(int min, int max, GCallback callback,
			  gpointer user_data)
{
  GtkWidget	*spin;

  spin = gtk_spin_button_new_with_range(min, max, 1);
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(spin), 0.0);
  g_signal_connect(G_OBJECT(spin), "value-changed", callback, user_data);
  gtk_widget_show(spin);
  return (spin);
}
