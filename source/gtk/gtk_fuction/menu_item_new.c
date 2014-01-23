/*
** menu_item_new.c for menu_item_new in /home/caron/igraph/generaytacer/source/menu
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Fri Apr 26 13:09:27 2013 Caron Thomas
** Last update Sat May 11 16:29:32 2013 Caron Thomas
*/

#include	<gtk/gtk.h>

void		menu_item_new(GtkMenu *p_menu, const gchar *title,
			      GCallback callback, gpointer user_data)
{
  GtkWidget	*p_menu_item;

  p_menu_item = gtk_menu_item_new_with_mnemonic(title);
  gtk_menu_shell_append(GTK_MENU_SHELL (p_menu), p_menu_item);
  g_signal_connect(G_OBJECT (p_menu_item), "activate", callback, user_data);
}
