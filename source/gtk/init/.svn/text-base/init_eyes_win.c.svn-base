/*
** init_eyes_win.c for init_eyes_win in /home/caron/git/generaytacer/source/gtk/init
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Thu May 16 19:51:42 2013 Caron Thomas
** Last update Tue Jun  4 03:03:24 2013 florian faisant
*/

#include		<gtk/gtk.h>
#include		"my.h"
#include		"gen.h"
#include		"callback.h"
#include		"gtk_func.h"

static GtkWidget	*define_pos(t_wid *wid)
{
  GtkWidget		*frame;

  frame = gtk_frame_new("position");
  wid->eyes->pos_wid[0] = new_spin(MIN_POS, MAX_POS, G_CALLBACK(eyes_x), wid);
  wid->eyes->pos_wid[1] = new_spin(MIN_POS, MAX_POS, G_CALLBACK(eyes_y), wid);
  wid->eyes->pos_wid[2] = new_spin(MIN_POS, MAX_POS, G_CALLBACK(eyes_z), wid);
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->eyes->pos_wid[2]),
			    wid->data.scene.eyes.pos.z);
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->eyes->pos_wid[0]),
			    wid->data.scene.eyes.pos.x);
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(wid->eyes->pos_wid[1]),
			    wid->data.scene.eyes.pos.y);
  gtk_container_add(GTK_CONTAINER(frame),
		    GTK_WIDGET(unit_vbox(wid->eyes->pos_wid, 3, FALSE, 0)));
  gtk_widget_show(frame);
  return (frame);
}

t_wid			*init_eyes(t_wid *wid)
{
  wid->eyes->win = gtk_dialog_new();
  gtk_window_set_title(GTK_WINDOW(wid->eyes->win), "Eyes position");
  g_signal_connect(G_OBJECT(wid->eyes->win), "destroy",
		   G_CALLBACK(eyes_remove), wid);
  gtk_box_pack_start(GTK_BOX(GTK_DIALOG(wid->eyes->win)->vbox),
		     define_pos(wid), TRUE, TRUE, 0);
  gtk_box_pack_start(GTK_BOX(GTK_DIALOG(wid->eyes->win)->action_area),
		     new_button("ok", NULL, G_CALLBACK(eyes_ok), wid),
		     TRUE, TRUE, 0);
  gtk_box_pack_start(GTK_BOX(GTK_DIALOG(wid->eyes->win)->action_area),
		     new_button("cancel", NULL, G_CALLBACK(eyes_remove), wid),
		     TRUE, TRUE, 0);
  gtk_widget_show_all(wid->eyes->win);
  return (wid);
}
