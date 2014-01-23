/*
** gtk_func.h for gtk_func in /home/florian/git/generaytracer/include
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Tue Jun  4 02:07:18 2013 florian faisant
** Last update Thu Jun  6 13:10:00 2013 Caron Thomas
*/

#ifndef GTK_FUNC_H_
# define GTK_FUNC_H_

# include	"gen.h"

void		*menu_item_new(GtkMenu *p_menu, const gchar *title,
			       GCallback callback, gpointer user_data);
GtkWidget	*new_frame_hscale(const gchar *name,
				  GCallback callback, int size,
				  gpointer user_data);
GtkWidget	*new_frame_entry(const gchar *name,
				 GCallback callback, gpointer user_data);
GtkWidget	*new_button(char *name, char *link, GCallback callback,
			    gpointer user_data);
GtkWidget	*new_spin(int min, int max, GCallback callback,
			  gpointer user_data);
GtkWidget	*new_spin_color(int min, int max, GCallback callback,
				gpointer user_data);
GtkWidget	*unit_hbox(GtkWidget **widget, int nbr_wid,
			   gboolean homogeneous, gint spacing);
GtkWidget	*unit_vbox(GtkWidget **widget, int nbr_wid,
			   gboolean homogeneous, gint spacing);
GtkWidget	*new_hscale(int pas, int max, GCallback callback,
			    gpointer user_data);
GtkWidget	*new_vscale(int pas, int max, GCallback callback,
			    gpointer user_data);
GtkWidget	*new_check_button(const gchar *name, int def,
				  GCallback callback, gpointer data);

#endif /* !GTK_FUNC_H_ */
