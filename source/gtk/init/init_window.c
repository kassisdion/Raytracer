/*
** init_window.c for init_index in /home/caron/igraph/generaytacer/source/init
**
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
**
** Started on  Thu Apr 25 11:35:11 2013 Caron Thomas
** Last update Tue Jun  4 02:49:41 2013 florian faisant
*/

#include	<gtk/gtk.h>
#include	"my.h"
#include	"gen.h"
#include	"callback.h"
#include	"gtk_func.h"

t_wid		*init_window(t_wid *wid)
{
  GtkWidget	*menu_item;

  wid->index->window = gtk_menu_new();
  menu_item = gtk_menu_item_new_with_mnemonic("_Window");
  menu_item_new(GTK_MENU(wid->index->window), "_Option Raytracer",
		G_CALLBACK(option), wid);
  gtk_menu_item_set_submenu(GTK_MENU_ITEM(menu_item), wid->index->window);
  gtk_menu_shell_append(GTK_MENU_SHELL(wid->win->menu_bar), menu_item);
  wid->option = xmalloc(sizeof (t_option));
  wid->option->open = 0;
  return (wid);
}
