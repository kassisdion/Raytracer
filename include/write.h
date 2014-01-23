/*
** write.h for write in /home/florian/git/generaytacer/include
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Mon May  6 15:57:24 2013 florian faisant
** Last update Tue May  7 14:43:57 2013 Caron Thomas
*/

#ifndef WRITE_H_
# define WRITE_H_

#include	<stdio.h>
#include	"struct_raytracer.h"
#include	"gen.h"

int		write_conf(t_wid *wid);
void		write_obj(FILE *fp, t_obj *obj);
void		write_eyes(FILE *fp, t_eyes *eyes);
void		write_spot(FILE *fp, t_spot *spot);

#endif /* !WRITE_H_ */
