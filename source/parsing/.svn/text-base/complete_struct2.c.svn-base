/*
** complete_struct2.c for complete_struct2 in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Fri May  3 23:55:48 2013 florian faisant
** Last update Tue May 28 00:29:05 2013 florian faisant
*/

#include	<stdlib.h>
#include	"raytracer.h"
#include	"my.h"
#include	"struct_raytracer.h"

int		complete_effect(FILE *fd, int *effect)
{
  char		*tmp;
  char		**tab;
  int		size_tab;

  if ((tmp = get_line(fd)) == NULL)
    return (error("Sorry, obj[effect][undeclared] error\n"));
  tab = my_str_to_word_tab(&size_tab, tmp, ' ');
  if (size_tab != 2)
    return (error_parsing(tmp, "Sorry, effect[nb_arg] error at this line : "));
  if (my_strcmp(tab[0], "effect") != 0)
    return (error_parsing(tmp,
			  "Sorry, function call[effect] error at this line : "));
  *effect = my_getnbr(tab[1]);
  free_tab(tab, size_tab);
  free(tmp);
  return (SUCCES);
}

int		complete_def_norme(FILE *fd, int *def_norme)
{
  char		*tmp;
  char		**tab;
  int		size_tab;

  if ((tmp = get_line(fd)) == NULL)
    return (error("Sorry, obj[def_norme][undeclared] error\n"));
  tab = my_str_to_word_tab(&size_tab, tmp, ' ');
  if (size_tab != 2)
    return (error_parsing(tmp,
			  "Sorry, def_norme[nb_arg] error at this line : "));
  if (my_strcmp(tab[0], "def_norme") != 0)
    {
      my_putstr("Sorry, function call[def norme]");
      return (error_parsing(tmp, "error at this line : "));
    }
  *def_norme = my_getnbr(tab[1]);
  free_tab(tab, size_tab);
  free(tmp);
  return (SUCCES);
}

int		complete_lim_min(FILE *fd, t_coordonne *lim)
{
  char		*tmp;
  char		**tab;
  int		size_tab;

  if ((tmp = get_line(fd)) == NULL)
    return (error("Sorry, obj[lim][undeclared] error\n"));
  tab = my_str_to_word_tab(&size_tab, tmp, ' ');
  if (size_tab != 4)
    return (error_parsing(tmp,
			  "Sorry, lim[nb_arg] error at this line : "));
  if (my_strcmp(tab[0], "lim_min") != 0)
    {
      my_putstr("Sorry, function call[lim]");
      return (error_parsing(tmp, "error at this line : "));
    }
  lim->x = my_getnbr(tab[1]);
  lim->y = my_getnbr(tab[2]);
  lim->z = my_getnbr(tab[3]);
  free_tab(tab, size_tab);
  free(tmp);
  return (SUCCES);
}

int		complete_lim_max(FILE *fd, t_coordonne *lim)
{
  char		*tmp;
  char		**tab;
  int		size_tab;

  if ((tmp = get_line(fd)) == NULL)
    return (error("Sorry, obj[lim][undeclared] error\n"));
  tab = my_str_to_word_tab(&size_tab, tmp, ' ');
  if (size_tab != 4)
    return (error_parsing(tmp,
			  "Sorry, lim[nb_arg] error at this line : "));
  if (my_strcmp(tab[0], "lim_max") != 0)
    {
      my_putstr("Sorry, function call[lim]");
      return (error_parsing(tmp, "error at this line : "));
    }
  lim->x = my_getnbr(tab[1]);
  lim->y = my_getnbr(tab[2]);
  lim->z = my_getnbr(tab[3]);
  free_tab(tab, size_tab);
  free(tmp);
  return (SUCCES);
}
