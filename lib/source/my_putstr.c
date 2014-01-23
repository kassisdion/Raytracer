/*
** my_putstr.c for my_putstr in /home/florian/raytracer/lib
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Wed Apr  3 14:42:20 2013 florian faisant
** Last update Sun Apr 14 14:58:26 2013 florian faisant
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"my.h"

int		my_putstr(char *str)
{
  int		check;

  check = -1;
  if (str == NULL)
    fatal_error("Sorry, we have to exit (fatal_error[my_putstr])\n");
  check = write(1, str, my_strlen(str));
  return (check);
}
