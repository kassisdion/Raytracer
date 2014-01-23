/*
** my_strlen.c for my_strlen in /home/florian/raytracer/lib
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Wed Apr  3 14:45:07 2013 florian faisant
** Last update Sun Apr 14 14:59:10 2013 florian faisant
*/

#include	<stdlib.h>
#include	"my.h"

int		my_strlen(char *str)
{
  int		count;

  count = 0;
  if (str == NULL)
    fatal_error("Sorry, we have to exit (fatal_error[my_strlen])\n");
  while (str[count] != '\0')
    count++;
  return (count);
}
