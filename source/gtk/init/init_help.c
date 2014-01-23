/*
** init_index.c for init_index in /home/caron/igraph/generaytacer/source/init
**
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
**
** Started on  Thu Apr 25 11:35:11 2013 Caron Thomas
** Last update Tue Jun  4 02:50:07 2013 florian faisant
*/

#include	<gtk/gtk.h>
#include	"my.h"
#include	"gen.h"
#include	"callback.h"
#include	"gtk_func.h"

t_wid		*init_help(t_wid *wid)
{
  GtkWidget	*menu_item;

  wid->index->help = gtk_menu_new();
  menu_item = gtk_menu_item_new_with_mnemonic("_Help");
  menu_item_new(GTK_MENU(wid->index->help), "_Help",
		G_CALLBACK(help), wid);
  menu_item_new(GTK_MENU(wid->index->help), "_About Us",
		G_CALLBACK(about), wid);
  menu_item_new(GTK_MENU(wid->index->help), "_Duck Balloon",
		G_CALLBACK(duck_balloon), wid);
  gtk_menu_item_set_submenu(GTK_MENU_ITEM(menu_item), wid->index->help);
  gtk_menu_shell_append(GTK_MENU_SHELL(wid->win->menu_bar), menu_item);
  return (wid);
}
