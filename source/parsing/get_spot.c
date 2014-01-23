/*
** get_spot.c for get_spot in /home/florian/git/rt/source/parsing
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Wed Apr 10 18:50:17 2013 florian faisant
** Last update Fri Jun  7 18:37:20 2013 florian faisant
*/

#include	<stdlib.h>
#include	"parsing.h"
#include	"struct_raytracer.h"
#include	"raytracer.h"
#include	"my.h"

void		complete_list_spot(t_spot **spot, int color, t_coordonne *pos,
				   int pow)
{
  t_spot	*elem;

  elem = xmalloc(sizeof(*elem));
  elem->pos = pos;
  elem->color = color;
  elem->power = pow;
  elem->next = *spot;
  *spot = elem;
}

static int	complete_spot_pos(FILE *fd, t_coordonne *spot)
{
  char		*tmp;
  char		**tab;
  int		size_tab;

  if ((tmp = get_line(fd)) == NULL)
    return (error("Sorry, spot[pos] error\n"));
  tab = my_str_to_word_tab(&size_tab, tmp, ' ');
  if (size_tab != 4)
    return (error("Sorry, bad number of arg for the spot pos\n"));
  if (my_strcmp(tab[0], "pos") != 0)
    return (error("Sorry, bad function call [pos]\n"));
  spot->x = my_getnbr(tab[1]);
  spot->y = my_getnbr(tab[2]);
  spot->z = my_getnbr(tab[3]);
  free_tab(tab, size_tab);
  free(tmp);
  return (SUCCES);
}

static int	complete_spot_power(FILE *fd, int *power)
{
  char		*tmp;
  char		**tab;
  int		size_tab;

  if ((tmp = get_line(fd)) == NULL)
    return (error("Sorry, spot[power] error\n"));
  tab = my_str_to_word_tab(&size_tab, tmp, ' ');
  if (size_tab != 2)
    return (error("Sorry, bad number of arg for the spot power\n"));
  *power = my_getnbr(tab[1]);
  if (*power < 1)
    return (error("Sorry, bad value for the spot power\n"));
  return (SUCCES);
}

int		add_spot(FILE *fd, t_spot **spot)
{
  t_coordonne	*pos;
  int		color;
  int		pow;

  pow = 0;
  pos = xmalloc(sizeof(*pos));
  if (complete_spot_pos(fd, pos) == FAIL)
    return (FAIL);
  if ((complete_color(fd, &color)) == FAIL)
    return (FAIL);
  if (complete_spot_power(fd, &pow) == FAIL)
    return (FAIL);
  complete_list_spot(spot, color, pos, pow);
  return (SUCCES);
}
