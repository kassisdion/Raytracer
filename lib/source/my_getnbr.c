/*
** my_getnbr.c for my_getnbr in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Thu Apr 11 23:36:34 2013 florian faisant
** Last update Wed May 22 02:44:25 2013 florian faisant
*/

#include	<stdlib.h>
#include	"my.h"
#include	"raytracer.h"

static int	check_str(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	if (str[i] != '+' && str[i] != '-' && str[i] != '.')
	  return (error_parsing("Warning : your number is not decimal\n", str));
      i++;
    }
  return (SUCCES);
}

double		my_getnbr(char *str)
{
  if (str == NULL)
    fatal_error("Sorry, we have to exit (fatal_error[my_getnbr])\n");
  check_str(str);
  return (atof(str));
}
