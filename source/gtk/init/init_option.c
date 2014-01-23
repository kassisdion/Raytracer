/*
** init_option.c for init_option in /home/caron/git/generaytacer/source/gtk/init
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Thu May  9 18:42:48 2013 Caron Thomas
** Last update Fri Jun  7 17:57:44 2013 Caron Thomas
*/

#include		<gtk/gtk.h>
#include		"gen.h"
#include		"callback.h"
#include		"gtk_func.h"

static GtkWidget	*init_button(t_wid *wid)
{
  GtkWidget		*button[5];

  button[0] = new_check_button("Background", wid->data.option.font,
			       G_CALLBACK(font_on_off), wid);
  button[1] = new_check_button("Negative", wid->data.option.negative,
			       G_CALLBACK(neg_on_off), wid);
  button[2] = new_check_button("Sepia", wid->data.option.sepia,
			       G_CALLBACK(sep_on_off), wid);
  button[3] = new_check_button("Cyanotype", wid->data.option.cyanotype,
			       G_CALLBACK(cya_on_off), wid);
  button[4] = new_check_button("Black White", wid->data.option.black_white,
			       G_CALLBACK(b_w_on_off), wid);
  return (unit_vbox(button, 5, FALSE, 0));
}

t_wid		*init_option(t_wid *wid)
{
  wid->option->win = gtk_dialog_new();
  gtk_window_set_title(GTK_WINDOW(wid->option->win), "Option");
  g_signal_connect(G_OBJECT(wid->option->win), "destroy",
		   G_CALLBACK(option_remove), wid);
  wid->option->hscale[1] = new_frame_hscale("Second Anti-Alising",
			       G_CALLBACK(get_anti_alias_sec_val),
			       20, wid);
  wid->option->hscale[0] = new_frame_hscale("First Anti-Alising",
			       G_CALLBACK(get_anti_alias_fir_val),
			       20, wid);
  gtk_box_pack_start(GTK_BOX(GTK_DIALOG(wid->option->win)->vbox),
		     GTK_WIDGET(init_button(wid)), TRUE, TRUE, 0);
  gtk_box_pack_start(GTK_BOX(GTK_DIALOG(wid->option->win)->vbox),
		     wid->option->hscale[0], TRUE, TRUE, 0);
  gtk_box_pack_start(GTK_BOX(GTK_DIALOG(wid->option->win)->vbox),
		     wid->option->hscale[1], TRUE, TRUE, 0);
  gtk_box_pack_start(GTK_BOX(GTK_DIALOG(wid->option->win)->action_area),
		     new_button("Ok", NULL, G_CALLBACK(option_ok), wid),
		     TRUE, TRUE, 0);
  gtk_box_pack_start(GTK_BOX(GTK_DIALOG(wid->option->win)->action_area),
		     new_button("Cancel", NULL, G_CALLBACK(option_remove)
				, wid), TRUE, TRUE, 0);
  return (wid);
}
