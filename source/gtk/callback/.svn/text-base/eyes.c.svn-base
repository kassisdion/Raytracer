/*
** save.c for save in /home/caron/igraph/generaytacer/source/event
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Fri Apr 26 16:17:44 2013 Caron Thomas
** Last update Tue Jun  4 02:34:30 2013 florian faisant
*/

#include	<gtk/gtk.h>
#include	<unistd.h>
#include	"gen.h"
#include	"init_gtk.h"

void		eyes_ok(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  wid->eyes->open = 0;
  wid->data.scene.eyes.pos.x = wid->eyes->pos[0];
  wid->data.scene.eyes.pos.y = wid->eyes->pos[1];
  wid->data.scene.eyes.pos.z = wid->eyes->pos[2];
  gtk_widget_destroy(wid->eyes->win);
}

void		eyes_remove(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  wid->eyes->open = 0;
  gtk_widget_destroy(wid->eyes->win);
}

void		eyes(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  if (wid->eyes->open == 0)
    {
      init_eyes(wid);
      gtk_widget_show(wid->eyes->win);
      wid->eyes->open = 1;
    }
}
