/*
** light.h for light in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Wed Apr 10 19:08:50 2013 florian faisant
** Last update Sun May 26 15:32:32 2013 florian faisant
*/

#ifndef LIGHT_H_
# define LIGHT_H_

# include	"struct_raytracer.h"

int		luminosite_sphere(t_data *data, t_obj *obj, t_spot *spot,
				  int power);
int		luminosite_plan(t_data *data, t_obj *obj, t_spot *spot,
				int power);
int		luminosite_cylindre(t_data *data, t_obj *obj, t_spot *spot,
				    int power);
int		luminosite_cone(t_data *data, t_obj *obj, t_spot *spot,
				int power);
int		luminosite_parabo(t_data *data, t_obj *obj, t_spot *spot,
				  int power);
int		luminosite_hyperbo(t_data *data, t_obj *obj, t_spot *spot,
				   int power);
int		normal_color(t_obj *obj, double cos, t_spot *spot, int c);
void		init_light_vec(t_coordonne *spot, t_coordonne *l,
			       t_coordonne *inter);
void		find_pos_inter(t_coordonne *vect, t_coordonne *inter,
			       double k, t_eyes *oeil);
int		define_real_color(t_obj *obj, t_data *data);
double		calc_cos(t_obj *obj, t_coordonne *normal, t_coordonne *inter);
int		remove_light(int *color);
int		check_limit(t_obj *obj, t_data *data);

#endif /* !LIGHT_H_ */
