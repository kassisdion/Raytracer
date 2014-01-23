/*
** my_getnbr_hexa.c for my_getnbr_hexa in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sat Apr 13 19:21:44 2013 florian faisant
** Last update Sun Apr 14 15:00:35 2013 florian faisant
*/

#include	<stdlib.h>
#include	"my.h"

static char	my_strchr(char *str, char carac)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == carac)
        return (i);
      i++;
    }
  return (-1);
}

int		my_getnbr_hex(char *str)
{
  int		n;
  int		nb;

  if (str == NULL)
    fatal_error("Sorry, we have to exit (fatal_error[my_getnbr_hex])\n");
  if (str[0] == '0' && str[1] == 'x')
    str += 2;
  n = 0;
  while (*str)
    {
      nb = my_strchr("0123456789abcdef", *str);
      if (nb == -1)
        nb = my_strchr("0123456789ABCDEF", *str);
      if (nb == -1)
        return (0);
      n = (n * 16) + nb;
      str++;
    }
  return (n);
}
