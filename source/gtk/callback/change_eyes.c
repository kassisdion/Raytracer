/*
** select_item.c for select_item in /home/caron/git/generaytacer/source/gtk/callback
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Tue May 14 18:30:31 2013 Caron Thomas
** Last update Fri May 17 00:42:45 2013 Caron Thomas
*/

#include	<stdlib.h>
#include	<gtk/gtk.h>
#include	"gen.h"
#include	"struct_raytracer.h"

void		eyes_x(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  wid->eyes->pos[0] = gtk_spin_button_get_value(GTK_SPIN_BUTTON(but));
}

void		eyes_y(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  wid->eyes->pos[1] = gtk_spin_button_get_value(GTK_SPIN_BUTTON(but));
}

void		eyes_z(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  wid->eyes->pos[2] = gtk_spin_button_get_value(GTK_SPIN_BUTTON(but));
}
