/*
** perlin.h for perlin in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Thu May  9 01:45:32 2013 florian faisant
** Last update Mon Jun  3 21:35:40 2013 florian faisant
*/

#ifndef PERLIN_H_
# define PERLIN_H_

#include	"struct_raytracer.h"

# define LIGNES		(30)
# define PERT		(0.3)
# define OCTAVES	(4)
# define PAS		(128)
# define PERSISTANCE	(0.01)

void		init_bruit2d(t_perlin *perlin, int p, int n, t_data *data);
double		bruit_coherent2d(double x, double y, t_perlin *perlin);
void		my_perlin(double bruit, int mark, t_obj *obj, double x);
double		bruit_2d(int i, int j, t_perlin *perlin);

#endif /* !PERLIN_H_ */
