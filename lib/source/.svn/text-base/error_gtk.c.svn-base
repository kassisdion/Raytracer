/*
** error.c for error in /home/florian/raytracer/lib/source
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Wed Apr  3 17:22:59 2013 florian faisant
** Last update Tue Jun  4 02:25:12 2013 florian faisant
*/

#include	<stdlib.h>
#include	"raytracer.h"
#include	"my.h"
#include	"gen.h"
#include	"error.h"

int		error(char *message)
{
  if (message != NULL)
    {
      my_putstr(message);
      error_gtk(message);
    }
  return (FAIL);
}

int		error_parsing(char *line, char *message)
{
  if (message != NULL)
    my_putstr(message);
  if (line != NULL)
    my_putstr(line);
  my_putchar('\n');
  error_gtk("error parsing");
  return (FAIL);
}

void		fatal_error(char *message)
{
  if (message != NULL)
    {
      error_gtk(message);
      my_putstr(message);
    }
  exit (1);
}
