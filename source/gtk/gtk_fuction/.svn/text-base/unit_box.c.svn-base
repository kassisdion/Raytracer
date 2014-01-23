/*
** unit_box.c for unit_box in /home/caron/git/generaytacer/source/gtk/gtk_fuction
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Wed May 15 01:23:19 2013 Caron Thomas
** Last update Fri May 17 13:54:43 2013 Caron Thomas
*/

#include	<gtk/gtk.h>

GtkWidget	*unit_hbox(GtkWidget **widget, int nbr_wid,
			   gboolean homogeneous, gint spacing)
{
  GtkWidget	*box;
  int		i;

  i = 0;
  box = gtk_hbox_new(homogeneous, spacing);
  while (i < nbr_wid)
      gtk_box_pack_start(GTK_BOX(box), widget[i++], FALSE, FALSE, 0);
  gtk_widget_show(box);
  return (box);
}

GtkWidget	*unit_vbox(GtkWidget **widget, int nbr_wid,
			   gboolean homogeneous, gint spacing)
{
  GtkWidget	*box;
  int		i;

  i = 0;
  box = gtk_vbox_new(homogeneous, spacing);
  while (i < nbr_wid)
      gtk_box_pack_start(GTK_BOX(box), widget[i++], FALSE, FALSE, 0);
  gtk_widget_show(box);
  return (box);
}
