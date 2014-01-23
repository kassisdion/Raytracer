/*
** save.c for save in /home/caron/igraph/generaytacer/source/event
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Fri Apr 26 16:17:44 2013 Caron Thomas
** Last update Sat Jun  1 12:03:04 2013 Caron Thomas
*/

#include	<gtk/gtk.h>
#include	<stdio.h>
#include	<unistd.h>
#include	"write.h"
#include	"init.h"
#include	"calc.h"
#include	"gen.h"

void		get_anti_alias_sec_val(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  wid->option->option_rt.final_aa = (int)(gtk_range_get_value(GTK_RANGE(but)));
}

void		get_anti_alias_fir_val(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  wid->option->option_rt.first_aa = (int)(gtk_range_get_value(GTK_RANGE(but)));
}
