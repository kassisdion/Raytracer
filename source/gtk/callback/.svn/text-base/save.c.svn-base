/*
** save.c for save in /home/caron/igraph/generaytacer/source/event
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Fri Apr 26 16:17:44 2013 Caron Thomas
** Last update Wed Jun  5 13:49:51 2013 florian faisant
*/

#include	<gtk/gtk.h>
#include	<stdio.h>
#include	<unistd.h>
#include	"write.h"
#include	"gen.h"

void		save(GtkWidget *but, gpointer data)
{
  t_wid		*wid;
  GtkWidget	*dialog;
  gchar		*file_name;

  wid = (t_wid *)(data);
  if (wid->file.fd == NULL)
    {
      dialog = gtk_file_chooser_dialog_new("Save file", NULL,
					   GTK_FILE_CHOOSER_ACTION_SAVE,
					   GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL,
					   GTK_STOCK_SAVE, GTK_RESPONSE_ACCEPT,
					   NULL);
      if (gtk_dialog_run(GTK_DIALOG(dialog)) == GTK_RESPONSE_ACCEPT)
	{
	  file_name = gtk_file_chooser_get_filename(GTK_FILE_CHOOSER(dialog));
	  wid->file.fd = fopen((const char*)file_name, "w+");
	  g_free(file_name);
	  write_conf(wid);
	}
      gtk_widget_destroy(dialog);
      (void)but;
    }
}
