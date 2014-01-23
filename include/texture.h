/*
** texture.h for texture in /home/florian/git/generaytacer
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Thu May 30 19:32:45 2013 florian faisant
** Last update Mon Jun  3 14:38:53 2013 florian faisant
*/

#ifndef TEXTURE_H_
# define TEXTURE_H_

# include	"struct_raytracer.h"

int		load_texture(t_data *data);
int		aply_texture(t_obj *obj, t_data *data);

#endif /* !TEXTURE_H_ */
