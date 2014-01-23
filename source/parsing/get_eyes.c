/*
** get_eyes.c for get_eyes in /home/florian/raytracer/source/parsing
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sun Apr  7 22:30:00 2013 florian faisant
** Last update Wed Jan 22 16:54:36 2014 florian faisant
*/

#include	<string.h>
#include	<stdlib.h>
#include	"my.h"
#include	"raytracer.h"
#include	"struct_raytracer.h"

static int	complete_pos_eyes(FILE *fd, t_eyes *eyes)
{
  char		*tmp;
  char		**tab;
  int		size_tab;

  if ((tmp = get_line(fd)) == NULL)
    return (error("Sorry, eyes[pos] error\n"));
  tab = my_str_to_word_tab(&size_tab, tmp, ' ');
  if (size_tab != 4)
    return (error("Sorry, bad number of arg for the pos\n"));
  if (strcmp(tab[0], "pos") != 0)
    return (error("Sorry, bad function call [pos]\n"));
  eyes->pos.x = my_getnbr(tab[1]);
  eyes->pos.y = my_getnbr(tab[2]);
  eyes->pos.z = my_getnbr(tab[3]);
  return (SUCCES);
}

static int	complete_rot_eyes(FILE *fd, t_eyes *eyes)
{
  char		*tmp;
  char		**tab;
  int		size_tab;

  if ((tmp = get_line(fd)) == NULL)
    return (error("Sorry, eyes[rot] error\n"));
  tab = my_str_to_word_tab(&size_tab, tmp, ' ');
  if (size_tab != 4)
    return (error("Sorry, bad number of arg for the rot\n"));
  if (strcmp(tab[0], "rot") != 0)
    return (error("Sorry, bad function call [rot]\n"));
  eyes->rotation.x = my_getnbr(tab[1]);
  eyes->rotation.y = my_getnbr(tab[2]);
  eyes->rotation.z = my_getnbr(tab[3]);
  return (SUCCES);
}

static int	 complete_eyes(FILE *fd, t_eyes *eyes)
{
  if (complete_pos_eyes(fd, eyes) == FAIL)
    return (FAIL);
  if (complete_rot_eyes(fd, eyes) == FAIL)
    return (FAIL);
  return (SUCCES);
}

int		get_eyes(t_eyes *eyes, FILE *fd)
{
  char		*tmp;

  while ((tmp = get_line(fd)))
    {
      if (tmp == NULL)
	return (error("Sorry, get_next_line has return NULL\n"));
      if (strncmp(tmp, "eyes", 4) == 0)
	{
	  if (complete_eyes(fd, eyes) == FAIL)
	    return (FAIL);
	  return (SUCCES);
	}
    }
  return (error("Sorry, you have to defined an eyes\n"));
}
