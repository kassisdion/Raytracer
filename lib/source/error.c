/*
** error.c for error in /home/florian/git/generaytacer/lib/source
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sat May 11 23:15:44 2013 florian faisant
** Last update Sat May 11 23:20:07 2013 florian faisant
*/

#include	<stdlib.h>
#include	"my.h"
#include	"raytracer.h"

int		error(char *message)
{
  if (message != NULL)
    my_putstr(message);
  return (FAIL);
}

int		error_parsing(char *line, char *message)
{
  if (message != NULL)
    my_putstr(message);
  if (line != NULL)
    my_putstr(line);
  my_putchar('\n');
  return (FAIL);
}

void		fatal_error(char *message)
{
  if (message != NULL)
    my_putstr(message);
  exit (1);
}
