/*
** save.c for save in /home/caron/igraph/generaytacer/source/event
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Fri Apr 26 16:17:44 2013 Caron Thomas
** Last update Wed Jun  5 12:11:25 2013 florian faisant
*/

#include	<gtk/gtk.h>
#include	<stdio.h>
#include	<unistd.h>
#include	"write.h"
#include	"init.h"
#include	"calc.h"
#include	"gen.h"
#include	"raytracer.h"
#include	"my.h"
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

void		open_file(GtkWidget *but, gpointer data)
{
  t_wid		*wid;
  GtkWidget	*dialog;
  gchar		*file_name;

  wid = (t_wid *)(data);
  dialog = gtk_file_chooser_dialog_new("Open file", NULL,
				       GTK_FILE_CHOOSER_ACTION_OPEN,
				       GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL,
				       GTK_STOCK_OPEN, GTK_RESPONSE_ACCEPT,
				       NULL);
  if (gtk_dialog_run(GTK_DIALOG(dialog)) == GTK_RESPONSE_ACCEPT)
    {
      file_name = gtk_file_chooser_get_filename(GTK_FILE_CHOOSER(dialog));
      make_new_scene(wid, file_name);
      g_free(file_name);
      update_val(wid);
      update_val_spot(wid);
    }
  wid->gen = 1;
  wid->start = 0;
  gtk_widget_destroy(dialog);
  (void)but;
}
