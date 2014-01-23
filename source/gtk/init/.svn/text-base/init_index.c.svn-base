/*
** init_index.c for init_index in /home/caron/igraph/generaytacer/source/init
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Thu Apr 25 11:35:11 2013 Caron Thomas
** Last update Tue Jun  4 02:47:39 2013 florian faisant
*/

#include	<gtk/gtk.h>
#include	"my.h"
#include	"gen.h"
#include	"callback.h"
#include	"gtk_func.h"

t_wid		*define_index(t_wid *wid)
{
  GtkWidget	*menu_item;

  wid->index->menu = gtk_menu_new();
  menu_item = gtk_menu_item_new_with_mnemonic("_File");
  menu_item_new(GTK_MENU(wid->index->menu), "_New",
		G_CALLBACK(new_projet), wid);
  menu_item_new(GTK_MENU(wid->index->menu), "_Save", G_CALLBACK(save), wid);
  menu_item_new(GTK_MENU(wid->index->menu), "_Save as",
		G_CALLBACK(save_as), wid);
  menu_item_new(GTK_MENU(wid->index->menu), "_Open",
		G_CALLBACK(open_file), wid);
  menu_item_new(GTK_MENU(wid->index->menu), "_Generaytracer",
		G_CALLBACK(gen), wid);
  menu_item_new(GTK_MENU(wid->index->menu), "_Exit",
		G_CALLBACK(gtk_main_quit), NULL);
  gtk_menu_item_set_submenu(GTK_MENU_ITEM(menu_item), wid->index->menu);
  gtk_menu_shell_append(GTK_MENU_SHELL(wid->win->menu_bar), menu_item);
  return (wid);
}

t_wid		*init_index(t_wid *wid)
{
  wid->index = xmalloc(sizeof(t_index));
  define_index(wid);
  return (wid);
}
