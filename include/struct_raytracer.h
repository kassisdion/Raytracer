/*
** struct_raytracer.h for struct_raytracer in /home/florian/raytracer/include
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Wed Apr  3 15:48:22 2013 florian faisant
** Last update Fri Jun  7 18:13:28 2013 florian faisant
*/

#ifndef STRUCT_RAYTRACER_H_
# define STRUCT_RAYTRACER_H_

typedef struct	s_coordonne
{
  double	x;
  double	y;
  double	z;
}		t_coordonne;

typedef struct	s_eyes
{
  t_coordonne	pos;
  t_coordonne	rotation;
  t_coordonne	translation;
}		t_eyes;

typedef struct	s_windo
{
  void		*mlx_ptr;
  void		*win_ptr;
  int		x;
  int		y;
}		t_windo;

typedef struct	s_img
{
  void		*img;
  char		*data;
  int		endian;
  int		bpp;
  int		sizeline;
  int		x;
  int		y;
}		t_img;

typedef struct	s_scene
{
  t_eyes	eyes;
  t_coordonne	vec;
}		t_scene;

typedef struct	s_obj
{
  int		focus;
  int		type;
  t_coordonne	pos;
  t_coordonne	rotation;
  int		color;
  int		rayon;
  int		effect;
  int		def_norme;
  float		brillance;
  t_coordonne	lim_min;
  t_coordonne	lim_max;
  float		d;
}		t_obj;

typedef struct	s_list
{
  struct s_list	*next;
  t_obj		*obj;
}		t_list;

typedef struct	s_spot
{
  struct s_spot	*next;
  int		color;
  int		power;
  t_coordonne	*pos;
}		t_spot;

typedef struct	s_perlin
{
  int		activate;
  double	*perlin_tab;
  int		x;
  int		y;
  double	a;
  double	b;
  double	c;
  double	d;
}		t_perlin;

typedef struct	s_option_rt
{
  int		first_aa;
  int		final_aa;
  int		aff_mode;
  int		preview;
  int		font;
  int		negative;
  int		sepia;
  int		cyanotype;
  int		black_white;
}		t_option_rt;

typedef struct	s_each_text
{
  void		*texture;
  char		*data;
  int		bpp;
  int		sizeline;
  int		endian;
  int		size_x;
  int		size_y;
}		t_each_text;

typedef struct	s_texture
{
  int		activate;
  t_each_text	text1;
  t_each_text	text2;
  t_each_text	text3;
}		t_texture;

typedef struct	s_data
{
  int		obj_id;
  t_windo	windo;
  t_img		img;
  t_scene	scene;
  t_list	*list;
  t_spot	*spot;
  t_texture	texture;
  t_perlin	perlin;
  int		update;
  t_option_rt	option;
  void		*wid;
}		t_data;

#endif /* !STRUCT_RAYTRACER_H_ */
