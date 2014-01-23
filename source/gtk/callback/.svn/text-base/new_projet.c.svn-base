/*
** save.c for save in /home/caron/igraph/generaytacer/source/event
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Fri Apr 26 16:17:44 2013 Caron Thomas
** Last update Tue Jun  4 02:53:34 2013 florian faisant
*/

#include	<gtk/gtk.h>
#include	<stdio.h>
#include	<unistd.h>
#include	<fcntl.h>
#include	"write.h"
#include	"init.h"
#include	"calc.h"
#include	"raytracer.h"
#include	"my.h"
#include	"gen.h"
#include	"error.h"
#include	"pos.h"

static t_wid	*make_new_scene(t_wid *wid, gchar *file_name)
{
  t_data	data;

  if (init_scene(&data, file_name) == FAIL)
    error_gtk("Sorry, parsing Faillure");
  else
    {
      destroy_list(&wid->data);
      wid->open = 1;
      wid->data.list = data.list;
      wid->data.spot = data.spot;
      wid->data.scene = data.scene;
    }
  return (wid);
}

static t_wid	*init_new_projet(t_wid *wid)
{
  make_new_scene(wid, "./resource/init.rt");
  update_val(wid);
  wid->open = 1;
  wid->start = 0;
  wid->gen = 1;
  return (wid);
}

void		new_projet(GtkWidget *but, gpointer data)
{
  t_wid		*wid;
  GtkWidget	*dial_box;
  GtkWidget	*entry;

  wid = (t_wid *)(data);
  dial_box = gtk_dialog_new_with_buttons("New Projet",
					 GTK_WINDOW(wid->win->win),
					 GTK_DIALOG_MODAL,
					 GTK_STOCK_OK, GTK_RESPONSE_OK,
					 GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL,
					 NULL);
  entry = gtk_entry_new();
  gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dial_box)->vbox), entry,
		     TRUE, FALSE, 0);
  gtk_widget_show_all(GTK_DIALOG(dial_box)->vbox);
  if (gtk_dialog_run(GTK_DIALOG(dial_box)) == GTK_RESPONSE_OK)
    {
      wid->file.file_name = gtk_entry_get_text(GTK_ENTRY(entry));
      if (open("./resource/init.rt", O_RDONLY) != -1)
	init_new_projet(wid);
      else
	error_gtk("error ./resource/init.rt, no found");
    }
  gtk_widget_destroy(dial_box);
  (void)but;
}
