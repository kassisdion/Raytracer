/*
** move.h for move in /home/florian/git/rt/include
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sat Apr 13 16:53:14 2013 florian faisant
** Last update Thu May 30 14:09:40 2013 florian faisant
*/

#ifndef MOVE_H_
# define MOVE_H_

# include	"struct_raytracer.h"

void		rotate(t_coordonne *vec, t_coordonne *data);
void		rotate_inv(t_coordonne *vec, t_coordonne *data);
void		rotate_x(double *x, double *y, double *z, double a);
void		rotate_y(double *x, double *y, double *z, double a);
void		rotate_z(double *x, double *y, double *z, double a);
void		translation(t_coordonne *vec, t_coordonne *data);
void		translation_inv(t_coordonne *vec, t_coordonne *data);
void		move_for_light(t_data *data, t_obj *obj, t_spot *spot);
void		move_inv_for_light(t_data *data, t_obj *obj, t_spot *spot);

#endif /* !MOVE_H_ */
