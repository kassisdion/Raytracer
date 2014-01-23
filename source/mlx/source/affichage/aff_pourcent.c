/*
** aff_pourcent.c for aff_pourcent in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sat Apr 13 15:39:30 2013 florian faisant
** Last update Mon Jun  3 21:19:48 2013 florian faisant
*/

#include	<mlx.h>
#include	<stdio.h>
#include	"struct_raytracer.h"
#include	"raytracer.h"
#include	"affichage.h"

void		aff_pourcent(int x, int y, t_data *data)
{
  double	up;
  char		carac;

  carac = '%';
  if (data->option.aff_mode == 1)
    aff_image(data);
  else if (data->option.aff_mode == 2)
    {
      up = (((double)y * (double)SIZE_WIN_X + (double)x) * 100.000
	    / ((double)SIZE_WIN_X * (double)SIZE_WIN_Y));
      printf("\r%f%c  ", up, carac);
      fflush(stdout);
    }
}
