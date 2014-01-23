/*
** init_surface.c for init_surface in /home/caron/igraph/generaytacer/source/init
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Thu Apr 25 13:52:35 2013 Caron Thomas
** Last update Thu Jun  6 13:15:30 2013 Caron Thomas
*/

#include		<gtk/gtk.h>
#include		"combo_box.h"
#include		"my.h"
#include		"raytracer.h"
#include		"gen.h"
#include		"callback.h"
#include		"gtk_func.h"

static GtkWidget	*init_prev_next(t_wid *wid)
{
  GtkWidget		*box;
  GtkWidget		*button;

  box = gtk_hbox_new(TRUE, 0);
  wid->surface->image = gtk_image_new();
  gtk_box_pack_start(GTK_BOX(box),
		     new_button(NULL, "./resource/gauche.png",
				G_CALLBACK(select_obj_prev),
				wid), TRUE, TRUE, 0);
  button = gtk_button_new();
  wid->surface->image = gtk_image_new_from_file("./resource/forme/none.png");
  gtk_button_set_image(GTK_BUTTON(button), GTK_WIDGET(wid->surface->image));
  g_signal_connect(G_OBJECT(button), "clicked", G_CALLBACK(objtype), wid);
  gtk_box_pack_start(GTK_BOX(box),
		     button, TRUE, FALSE, 0);
  gtk_box_pack_start(GTK_BOX(box),
		     new_button(NULL, "./resource/droite.png",
				G_CALLBACK(select_obj_next),
				wid), TRUE, TRUE, 0);
  return (box);
}

static GtkWidget	*init_change(t_wid *w)
{
  GtkWidget		*frame[3];

  w->surface->lim_x[0] = new_spin(0, SIZE_WIN_X, G_CALLBACK(change_limxs), w);
  w->surface->lim_x[1] = new_spin(0, SIZE_WIN_X, G_CALLBACK(change_limxe), w);
  w->surface->lim_y[0] = new_spin(0, SIZE_WIN_Y, G_CALLBACK(change_limys), w);
  w->surface->lim_y[1] = new_spin(0, SIZE_WIN_Y, G_CALLBACK(change_limye), w);
  w->surface->lim_z[0] = new_spin(0, SIZE_WIN_Y, G_CALLBACK(change_limzs), w);
  w->surface->lim_z[1] = new_spin(0, SIZE_WIN_Y, G_CALLBACK(change_limze), w);
  frame[0] = gtk_frame_new("Lim-X");
  frame[1] = gtk_frame_new("Lim-Y");
  frame[2] = gtk_frame_new("Lim-Z");
  gtk_container_add(GTK_CONTAINER(frame[0]),
		    GTK_WIDGET(unit_vbox(w->surface->lim_x, 2, FALSE, 0)));
  gtk_container_add(GTK_CONTAINER(frame[1]),
		    GTK_WIDGET(unit_vbox(w->surface->lim_y, 2, FALSE, 0)));
  gtk_container_add(GTK_CONTAINER(frame[2]),
		    GTK_WIDGET(unit_vbox(w->surface->lim_z, 2, FALSE, 0)));
  return (unit_hbox(frame, 3, TRUE, 5));
}

static GtkWidget	*init_pos(t_wid *wid)
{
  GtkWidget		*femme[3];

  wid->surface->pos[0] =
    new_spin(MIN_POS, MAX_POS, G_CALLBACK(change_pos_x), wid);
  wid->surface->pos[1] =
    new_spin(MIN_POS, MAX_POS, G_CALLBACK(change_pos_y), wid);
  wid->surface->pos[2] =
    new_spin(MIN_POS, MAX_POS, G_CALLBACK(change_pos_z), wid);
  wid->surface->rot[0] = new_spin(-360, 360, G_CALLBACK(change_rot_x), wid);
  wid->surface->rot[1] = new_spin(-360, 360, G_CALLBACK(change_rot_y), wid);
  wid->surface->rot[2] = new_spin(-360, 360, G_CALLBACK(change_rot_z), wid);
  femme[0] = gtk_frame_new("Position");
  femme[1] = gtk_frame_new("Rotation");
  femme[2] = gtk_frame_new("Radius");
  gtk_container_add(GTK_CONTAINER(femme[0]),
		    GTK_WIDGET(unit_vbox(wid->surface->pos, 3, FALSE, 0)));
  gtk_container_add(GTK_CONTAINER(femme[1]),
		    GTK_WIDGET(unit_vbox(wid->surface->rot, 3, FALSE, 0)));
  wid->surface->rayon = new_spin(0, 50000, G_CALLBACK(change_ray), wid);
  gtk_container_add(GTK_CONTAINER(femme[2]),
  		    GTK_WIDGET(wid->surface->rayon));
  return (unit_vbox(femme, 3, FALSE, 0));
}

static GtkWidget	*init_effect(t_wid *wid)
{
  GtkWidget		*frame[4];

  frame[0] = gtk_frame_new("Effect");
  frame[1] = gtk_frame_new("Shiny");
  frame[2] = gtk_frame_new("Other");
  frame[3] = gtk_frame_new("Color");
  wid->surface->effect_but = new_button("None", NULL,
					G_CALLBACK(objeffect), wid);
  gtk_container_add(GTK_CONTAINER(frame[0]),
		    wid->surface->effect_but);
  wid->surface->brillance =
    new_hscale(1, 300, G_CALLBACK(change_brillance), wid);
  gtk_container_add(GTK_CONTAINER(frame[1]),
		    wid->surface->brillance);
  wid->surface->def = new_check_button("Normal's distortion", 0,
				       G_CALLBACK(change_def), wid);
  gtk_container_add(GTK_CONTAINER(frame[2]),
		    wid->surface->def);
  wid->surface->color[0] = new_spin(0, 255, G_CALLBACK(change_red), wid);
  wid->surface->color[1] = new_spin(0, 255, G_CALLBACK(change_green), wid);
  wid->surface->color[2] = new_spin(0, 255, G_CALLBACK(change_blue), wid);
  gtk_container_add(GTK_CONTAINER(frame[3]),
		    unit_hbox(wid->surface->color, 3, TRUE, 0));
  return (unit_vbox(frame, 4, FALSE, 0));
}

t_wid			*init_surface(t_wid *wid)
{
  GtkWidget		*box[3];

  wid->surface = xmalloc(sizeof(t_surface));
  wid->surface->open = 0;
  wid->in_gen = 0;
  box[1] = gtk_hbox_new(TRUE, 0);
  box[0] = gtk_vbox_new(FALSE, 2);
  box[2] = gtk_vbox_new(FALSE, 2);
  gtk_box_pack_start(GTK_BOX(box[0]),
		     init_prev_next(wid), TRUE, TRUE, 0);
  gtk_box_pack_start(GTK_BOX(box[0]),
		     init_pos(wid), FALSE, FALSE, 0);
  gtk_box_pack_start(GTK_BOX(box[1]),
		     init_change(wid), FALSE, FALSE, 0);
  gtk_box_pack_start(GTK_BOX(box[2]),
		     init_effect(wid), FALSE, FALSE, 0);
  wid->surface->box = gtk_frame_new("Object");
  gtk_container_add(GTK_CONTAINER(wid->surface->box),
		    GTK_WIDGET(unit_vbox(box, 3, FALSE, 0)));
  wid->data.obj_id = 0;
  return (wid);
}
