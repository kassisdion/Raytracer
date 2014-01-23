/*
** init.h for init in /home/florian/raytracer/include
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Wed Apr  3 16:05:41 2013 florian faisant
** Last update Mon May 13 19:09:30 2013 florian faisant
*/

#ifndef INIT_H_
# define INIT_H_

# include	"struct_raytracer.h"

int		init_mlx();
int		init_scene(t_data *data, char *config_name);
void		init_vec(t_coordonne *vec, double x, double y);
void		init_thread(t_data *data);

#endif /* !INIT_H_ */
