/*
** change_option_rt.c for change_option_rt in /home/caron/git/generaytacer/source/gtk/callback
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Sat Jun  1 11:58:23 2013 Caron Thomas
** Last update Fri Jun  7 17:56:48 2013 Caron Thomas
*/

#include	<gtk/gtk.h>
#include	"gen.h"
#include	"struct_raytracer.h"

void		font_on_off(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(but)) == TRUE)
    wid->option->option_rt.font = 1;
  else
    wid->option->option_rt.font = 0;
}

void		neg_on_off(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(but)) == TRUE)
    wid->option->option_rt.negative = 1;
  else
    wid->option->option_rt.negative = 0;
}

void		sep_on_off(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(but)) == TRUE)
    wid->option->option_rt.sepia = 1;
  else
    wid->option->option_rt.sepia = 0;
}

void		cya_on_off(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(but)) == TRUE)
    wid->option->option_rt.cyanotype = 1;
  else
    wid->option->option_rt.cyanotype = 0;
}

void		b_w_on_off(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(but)) == TRUE)
    wid->option->option_rt.black_white = 1;
  else
    wid->option->option_rt.black_white = 0;
}
