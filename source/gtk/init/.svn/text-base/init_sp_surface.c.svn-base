/*
** init_sp_surface.c for init_sp_surface in /home/caron/git/generaytacer/source/gtk/init
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Thu May 23 14:23:34 2013 Caron Thomas
** Last update Fri Jun  7 22:58:21 2013 Caron Thomas
*/

#include		<gtk/gtk.h>
#include		"gen.h"
#include		"my.h"
#include		"callback.h"
#include		"gtk_func.h"

static GtkWidget	*init_prev_next(t_wid *wid)
{
  GtkWidget		*box;

  box = gtk_hbox_new(TRUE, 0);
  gtk_box_pack_start(GTK_BOX(box),
		     new_button(NULL, "./resource/gauche_b.png",
				G_CALLBACK(select_spot_prev),
				wid), TRUE, TRUE, 0);
  gtk_box_pack_start(GTK_BOX(box),
		     new_button(NULL, "./resource/droite_b.png",
				G_CALLBACK(select_spot_next),
				wid), TRUE, TRUE, 0);
  return (box);
}

static GtkWidget	*init_pos(t_wid *wid)
{
  GtkWidget		*femme[3];

  wid->s_surface->pos[0] =
    new_spin(MIN_POS, MAX_POS, G_CALLBACK(change_s_pos_x), wid);
  wid->s_surface->pos[1] =
    new_spin(MIN_POS, MAX_POS, G_CALLBACK(change_s_pos_y), wid);
  wid->s_surface->pos[2] =
    new_spin(MIN_POS, MAX_POS, G_CALLBACK(change_s_pos_z), wid);
  wid->s_surface->color[0] = new_spin(0, 360, G_CALLBACK(change_s_red), wid);
  wid->s_surface->color[1] = new_spin(0, 360, G_CALLBACK(change_s_green), wid);
  wid->s_surface->color[2] = new_spin(0, 360, G_CALLBACK(change_s_blue), wid);
  wid->s_surface->power = new_hscale(1, 300, G_CALLBACK(change_s_power), wid);
  femme[0] = gtk_frame_new("Position");
  femme[1] = gtk_frame_new("Color");
  femme[2] = gtk_frame_new("Power");
  gtk_container_add(GTK_CONTAINER(femme[0]),
		    GTK_WIDGET(unit_vbox(wid->s_surface->pos, 3, FALSE, 0)));
  gtk_container_add(GTK_CONTAINER(femme[1]),
		    GTK_WIDGET(unit_vbox(wid->s_surface->color, 3, FALSE, 0)));
  gtk_container_add(GTK_CONTAINER(femme[2]),
		    GTK_WIDGET(wid->s_surface->power));
  return (unit_vbox(femme, 3, FALSE, 0));
}

static GtkWidget	*init_adm(t_wid *wid)
{
  GtkWidget		*button[3];

  button[0] = new_button("New Object", NULL, G_CALLBACK(new_objet), wid);
  button[1] = new_button("New Spot", NULL, G_CALLBACK(new_spot), wid);
  button[2] = new_button("Eyes", NULL, G_CALLBACK(eyes), wid);
  return (unit_vbox(button, 3, FALSE, 0));
}

t_wid			*init_sp_surface(t_wid *wid)
{
  GtkWidget		*frame[2];
  GtkWidget		*box[2];

  wid->s_surface = xmalloc(sizeof(t_s_surface));
  box[0] = gtk_vbox_new(FALSE, 0);
  frame[0] = gtk_frame_new("spot");
  gtk_box_pack_start(GTK_BOX(box[0]),
		     init_prev_next(wid), TRUE, TRUE, 0);
  gtk_box_pack_start(GTK_BOX(box[0]),
		     init_pos(wid), TRUE, TRUE, 0);
  gtk_container_add(GTK_CONTAINER(frame[0]),
		    GTK_WIDGET(box[0]));
  frame[1] = gtk_frame_new("object management");
  gtk_container_add(GTK_CONTAINER(frame[1]),
		    GTK_WIDGET(init_adm(wid)));
  wid->s_surface->box = unit_vbox(frame, 2, FALSE, 0);
  wid->spot_id = 0;
  return (wid);
}
