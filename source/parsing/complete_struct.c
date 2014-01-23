/*
** utils.c for utils in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Fri Apr 12 01:07:21 2013 florian faisant
** Last update Tue Jan 14 21:01:55 2014 florian faisant
*/

#include	<stdlib.h>
#include	"raytracer.h"
#include	"struct_raytracer.h"
#include	"my.h"

int		complete_rayon(FILE *fd, int *rayon)
{
  char		*tmp;
  char		**tab;
  int		size_tab;

  if ((tmp = get_line(fd)) == NULL)
    return (error("Sorry, obj[rayon][undeclared] error\n"));
  tab = my_str_to_word_tab(&size_tab, tmp, ' ');
  if (size_tab != 2)
    return (error_parsing(tmp, "Sorry, rayon[nb_arg] error at this line : "));
  if (my_strcmp(tab[0], "rayon") != 0)
    return (error_parsing(tmp,
			  "Sorry, function call[rayon] error at this line : "));
  *rayon = my_getnbr(tab[1]);
  free_tab(tab, size_tab);
  free(tmp);
  return (SUCCES);
}

int		complete_color(FILE *fd, int *color)
{
  char		*tmp;
  char		**tab;
  int		size_tab;

  if ((tmp = get_line(fd)) == NULL)
    return (error("Sorry, obj[color][undeclared] error\n"));
  tab = my_str_to_word_tab(&size_tab, tmp, ' ');
  if (size_tab != 2)
    return (error_parsing(tmp,
			  "Sorry, color[nb_arg] error at this line : "));
  if (my_strcmp(tab[0], "color") != 0)
    return (error_parsing(tmp,
			  "Sorry, function call[color] error at this line : "));
  *color = my_getnbr_hex(tab[1]);
  free_tab(tab, size_tab);
  free(tmp);
  return (SUCCES);
}

int		complete_brillance(FILE *fd, float *brillance)
{
  char		*tmp;
  char		**tab;
  int		size_tab;

  if ((tmp = get_line(fd)) == NULL)
    return (error("Sorry, obj[brillance][undeclared] error\n"));
  tab = my_str_to_word_tab(&size_tab, tmp, ' ');
  if (size_tab != 2)
    return (error_parsing(tmp,
			  "Sorry, brillance[nb_arg] error at this line : "));
  if (my_strcmp(tab[0], "brillance") != 0)
    return (error_parsing(tmp,
			  "Sorry, func call[brillance] error at this line : "));
  *brillance = my_getnbr(tab[1]);
  free_tab(tab, size_tab);
  free(tmp);
  return (SUCCES);
}

int		complete_pos(FILE *fd, t_coordonne *pos)
{
  char		*tmp;
  char		**tab;
  int		size_tab;

  if ((tmp = get_line(fd)) == NULL)
    return (error("Sorry, obj[pos][undeclared] error"));
  tab = my_str_to_word_tab(&size_tab, tmp, ' ');
  if (size_tab != 4)
    return (error_parsing(tmp,
			  "Sorry, pos[nb_arg] error at this line : "));
  if (my_strcmp(tab[0], "pos") != 0)
    return (error_parsing(tmp,
			  "Sorry, function call[pos] error at this line : "));
  pos->x = my_getnbr(tab[1]);
  pos->y = my_getnbr(tab[2]);
  pos->z = my_getnbr(tab[3]);
  free_tab(tab, size_tab);
  free(tmp);
  return (SUCCES);
}

int		complete_rot(FILE *fd, t_coordonne *rotation)
{
  char		*tmp;
  char		**tab;
  int		size_tab;

  if ((tmp = get_line(fd)) == NULL)
    return (error("Sorry, obj[rot][undeclared] error"));
  tab = my_str_to_word_tab(&size_tab, tmp, ' ');
  if (size_tab != 4)
    return (error_parsing(tmp,
			  "Sorry, rot[nb_arg] error at this line : "));
  if (my_strcmp(tab[0], "rot") != 0)
    return (error_parsing(tmp,
			  "Sorry, function call[rot] error at this line : "));
  rotation->x = my_getnbr(tab[1]);
  rotation->y = my_getnbr(tab[2]);
  rotation->z = my_getnbr(tab[3]);
  free_tab(tab, size_tab);
  free(tmp);
  return (SUCCES);
}
