/*
** combo_box.h for combo_box in /home/caron/igraph/generaytacer/include
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Mon Apr 29 11:23:46 2013 Caron Thomas
** Last update Sun May 12 00:15:26 2013 florian faisant
*/

#ifndef COMBO_BOX_H_
# define COMBO_BOX_H_

# include	<gtk/gtk.h>

typedef struct	s_gtk_combo_box
{
  int			id;
  GtkWidget		*box;
  GtkListStore		*model;
  GtkCellRenderer	*cell;
  GtkTreeIter		iter;
}		t_gtk_combo_box;

t_gtk_combo_box		*new_combo_box(t_gtk_combo_box *combo);
t_gtk_combo_box		*add_value(t_gtk_combo_box *combo);

#endif /* !COMBO_BOX_H_ */
