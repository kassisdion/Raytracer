/*
** translation.c for translation in /home/florian/git/rt/source/move
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Wed Apr 10 21:39:30 2013 florian faisant
** Last update Thu May  2 02:05:53 2013 florian faisant
*/

#include	"struct_raytracer.h"

void		translation(t_coordonne *vec, t_coordonne *data)
{
  vec->x = vec->x - data->x;
  vec->y = vec->y - data->y;
  vec->z = vec->z - data->z;
}

void		translation_inv(t_coordonne *vec, t_coordonne *data)
{
  vec->x = vec->x + data->x;
  vec->y = vec->y + data->y;
  vec->z = vec->z + data->z;
}

