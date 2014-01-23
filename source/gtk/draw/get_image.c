/*
** get_image.c for get_image in /home/caron/git/generaytacer/source/gtk/draw
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Wed May 15 16:30:58 2013 Caron Thomas
** Last update Fri Jun  7 17:54:07 2013 Caron Thomas
*/

#include	<gtk/gtk.h>
#include	"raytracer.h"

char		*get_image(int type)
{
  if (type == SPHERE)
    return (IMG_SPHERE);
  else if (type == PLAN)
    return (IMG_PLAN);
  else if (type == CYLINDRE)
    return (IMG_CYLINDRE);
  else if (type == CONE)
    return (IMG_CONE);
  else if (type == PARABO)
    return (IMG_PARABO);
  if (type == HYPERBO)
    return (IMG_HYPERBO);
  else
    return (IMG_HYPERBO);
}

char		*get_effect(int type)
{
  if (type == -1)
    return ("None");
  else if (type == 1)
    return ("checkerboard");
  else if (type == 2)
    return ("circle");
  else if (type == 3)
    return ("checkerboard + perlin");
  else if (type == 4)
    return ("perlin smooth");
  else if (type == 5)
    return ("perlin");
  else if (type == 6)
    return ("perlin++");
  else if (type == 7)
    return ("texture = sea");
  else if (type == 8)
    return ("texture = wood");
  else if (type == 9)
    return ("texture = stone");
  else if (type == 10)
    return ("Charly Chaplin");
  return ("None");
}
