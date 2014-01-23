/*
** my_strcmp.c for my_strcmp in /home/florian/git/rt/lib/source
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Tue Apr  9 16:38:24 2013 florian faisant
** Last update Sun Apr 14 15:00:00 2013 florian faisant
*/

#include	<stdlib.h>
#include	"my.h"

int		my_strcmp(char *s1, char *s2)
{
  if (s1 == NULL)
    fatal_error("Sorry, we have to exit (fatal_error[my_strcmp])\n");
  if (s2 == NULL)
    fatal_error("Sorry, we have to exit (fatal_error[my_strcmp])\n");
  while ((*s1 && *s2) && (*s1 == *s2))
    {
      s1++;
      s2++;
    }
  return (*s1 - *s2);
}
