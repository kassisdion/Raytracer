/*
** save.c for save in /home/caron/igraph/generaytacer/source/event
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Fri Apr 26 16:17:44 2013 Caron Thomas
** Last update Fri Jun  7 17:58:19 2013 Caron Thomas
*/

#include	<gtk/gtk.h>
#include	<unistd.h>
#include	"gen.h"
#include	"init_gtk.h"

void		option_ok(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  wid->data.option.first_aa = wid->option->option_rt.first_aa;
  wid->data.option.final_aa = wid->option->option_rt.final_aa;
  wid->data.option.font = wid->option->option_rt.font;
  wid->data.option.negative = wid->option->option_rt.negative;
  wid->data.option.sepia = wid->option->option_rt.sepia;
  wid->data.option.cyanotype = wid->option->option_rt.cyanotype;
  wid->data.option.black_white = wid->option->option_rt.black_white;
  wid->option->open = 0;
  gtk_widget_destroy(wid->option->win);
}

void		option_remove(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  wid->option->open = 0;
  wid->option->option_rt.first_aa = wid->data.option.first_aa;
  wid->option->option_rt.final_aa = wid->data.option.final_aa;
  gtk_widget_destroy(wid->option->win);
}

void		option(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  if (wid->option->open == 0)
    {
      init_option(wid);
      gtk_widget_show(wid->option->win);
      wid->option->open = 1;
    }
}
