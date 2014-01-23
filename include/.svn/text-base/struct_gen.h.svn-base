/*
** struct_gen.h for struct_gen in /home/florian/git/generaytracer/include
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Tue Jun  4 01:54:32 2013 florian faisant
** Last update Fri Jun  7 22:48:45 2013 Caron Thomas
*/

#ifndef STRUCT_GEN_H_
# define STRUCT_GEN_H_

# include	<gtk/gtk.h>
# include	"struct_raytracer.h"

typedef struct	s_wid t_wid;

typedef struct	s_progress_bar
{
  GtkWidget	*win;
  GtkWidget	*bar;
  int		open;
  int		up;
}		t_progress_bar;

typedef struct	s_dial_box
{
  GtkWidget	*win;
  double	pos[3];
  int		open;
  GtkWidget	*pos_wid[3];
}		t_dial_box;

typedef struct	s_option
{
  GtkWidget	*win;
  GtkWidget	*select;
  GtkWidget	*box;
  GtkWidget	*hscale[2];
  t_option_rt	option_rt;
  int		open;
}		t_option;

typedef struct	s_win
{
  GtkWidget	*menu_bar;
  GtkWidget	*win;
  GtkWidget	*box;
  GtkWidget	*table;
}		t_win;

typedef struct	s_index
{
  GtkWidget	*window;
  GtkWidget	*menu;
  GtkWidget	*new_projet;
  GtkWidget	*edit;
  GtkWidget	*help;
}		t_index;

typedef struct	s_file
{
  const char	*file_name;
  FILE		*fd;
}		t_file;

typedef struct	s_obj_select
{
  GtkWidget	*button;
  int		type;
  t_wid		*wid;
}		t_obj_select;

typedef struct	s_s_surface
{
  GtkWidget	*box;
  GtkWidget	*pos[3];
  GtkWidget	*color[3];
  GtkWidget	*power;
}		t_s_surface;

typedef struct	s_surface
{
  GtkWidget	*win_obj;
  int		open;
  t_obj_select	objselect[9];
  t_obj_select	effect[12];
  GtkWidget	*effect_but;
  int		open_eff;
  GtkWidget	*texture;
  GtkWidget	*def;
  GtkWidget	*brillance;
  GtkWidget	*win_eff;
  GtkWidget	*box;
  GtkWidget	*image;
  GtkWidget	*pos[3];
  GtkWidget	*rot[3];
  GtkWidget	*rayon;
  GtkWidget	*color[3];
  GtkWidget	*lim_x[2];
  GtkWidget	*lim_y[2];
  GtkWidget	*lim_z[2];
  GtkWidget	*type;
}		t_surface;

struct		s_wid
{
  t_file	file;
  int		spot_id;
  t_s_surface	*s_surface;
  int		open;
  int		start;
  int		in_gen;
  t_data	data;
  char		gen;
  t_win		*win;
  t_index	*index;
  t_surface	*surface;
  t_option	*option;
  t_dial_box	*eyes;
};

#endif /* !STRUCT_GEN_H_ */
