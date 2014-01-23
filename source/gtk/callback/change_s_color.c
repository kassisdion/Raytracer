/*
** select_item.c for select_item in /home/caron/git/generaytacer/source/gtk/callback
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Tue May 14 18:30:31 2013 Caron Thomas
** Last update Thu May 30 12:59:04 2013 florian faisant
*/

#include	<stdlib.h>
#include	<gtk/gtk.h>
#include	"gen.h"
#include	"struct_raytracer.h"

static int	get_new_color(int color, int val, int pos)
{
  int		tmp[3];

  tmp[0] = (color) & 0xff;
  tmp[1] = (color >> 8) & 0xff;
  tmp[2] = (color >> 16) & 0xff;
  if (pos == 1)
    {
      color = val;
      color = (color << 8) + (tmp[1] & 0xff);
      color = (color << 8) + (tmp[0] & 0xff);
    }
  else if (pos == 2)
    {
      color = tmp[2];
      color = (color << 8) + (val & 0xff);
      color = (color << 8) + (tmp[0] & 0xff);
    }
  else if (pos == 3)
    {
      color = tmp[2];
      color = (color << 8) + (tmp[1] & 0xff);
      color = (color << 8) + (val & 0xff);
    }
  return (color);
}

void		change_s_red(GtkWidget *but, gpointer data)
{
  int		id;
  t_wid		*wid;
  t_spot	*tmp;

  wid = (t_wid *)(data);
  tmp = wid->data.spot;
  id = 0;
  while (id != wid->spot_id)
    {
      tmp = tmp->next;
      id++;
    }
  if (tmp != NULL)
    tmp->color =
      get_new_color(tmp->color,
		    (int)(gtk_spin_button_get_value(GTK_SPIN_BUTTON(but))), 1);
  wid->in_gen = 0;
}

void		change_s_green(GtkWidget *but, gpointer data)
{
  int		id;
  t_wid		*wid;
  t_spot	*tmp;

  wid = (t_wid *)(data);
  tmp = wid->data.spot;
  id = 0;
  while (id != wid->spot_id)
    {
      tmp = tmp->next;
      id++;
    }
  if (tmp != NULL)
    tmp->color =
      get_new_color(tmp->color,
		    (int)(gtk_spin_button_get_value(GTK_SPIN_BUTTON(but))), 2);
  wid->in_gen = 0;
}

void		change_s_blue(GtkWidget *but, gpointer data)
{
  int		id;
  t_wid		*wid;
  t_spot	*tmp;

  wid = (t_wid *)(data);
  tmp = wid->data.spot;
  id = 0;
  while (id != wid->spot_id)
    {
      tmp = tmp->next;
      id++;
    }
  if (tmp != NULL)
    tmp->color =
      get_new_color(tmp->color,
		    (int)(gtk_spin_button_get_value(GTK_SPIN_BUTTON(but))), 3);
  wid->in_gen = 0;
}
