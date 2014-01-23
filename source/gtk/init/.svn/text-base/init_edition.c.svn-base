/*
** init_index.c for init_index in /home/caron/igraph/generaytacer/source/init
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Thu Apr 25 11:35:11 2013 Caron Thomas
** Last update Tue Jun  4 02:49:55 2013 florian faisant
*/

#include	<gtk/gtk.h>
#include	"my.h"
#include	"gen.h"
#include	"callback.h"
#include	"gtk_func.h"

t_wid		*init_edition(t_wid *wid)
{
  GtkWidget	*menu_item;

  wid->eyes = xmalloc(sizeof(t_dial_box));
  wid->eyes->open = 0;
  wid->index->edit = gtk_menu_new();
  menu_item = gtk_menu_item_new_with_mnemonic("_Edit");
  menu_item_new(GTK_MENU(wid->index->edit), "_New Object",
		G_CALLBACK(new_objet), wid);
  menu_item_new(GTK_MENU(wid->index->edit), "_New Spot",
		G_CALLBACK(new_spot), wid);
  menu_item_new(GTK_MENU(wid->index->edit), "_Eyes",
		G_CALLBACK(eyes), wid);
  gtk_menu_item_set_submenu(GTK_MENU_ITEM(menu_item), wid->index->edit);
  gtk_menu_shell_append(GTK_MENU_SHELL(wid->win->menu_bar), menu_item);
  return (wid);
}
