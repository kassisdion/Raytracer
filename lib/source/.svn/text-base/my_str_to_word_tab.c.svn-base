/*
** my_str_to_word_tab.c for my_str_to_word_tab in /home/florian/git/rt/lib/source
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Tue Apr  9 16:54:23 2013 florian faisant
** Last update Sun Apr 14 14:37:59 2013 florian faisant
*/

#include	<stdlib.h>
#include	"my.h"

static int	find_nb_word(char *str, char carac)
{
  int		i;
  int		nb_word;

  i = 0;
  nb_word = 1;
  while (str[i] != '\0' && str[i] != '\n')
    {
      if (str[i] == carac)
	{
	  while (str[i] == carac)
	    i++;
	  if (str[i] == '\0')
	    return (nb_word);
	  nb_word++;
	}
      i++;
    }
  return (nb_word);
}

static int	countchar(char *str, char carac)
{
  int		i;

  i = 0;
  while ((str[i] != carac) && (str[i] != '\0') && (str[i] != '\n'))
    i++;
  i++;
  return (i);
}

static void	complete_tab(char *str, char **tab, char carac)
{
  int		i;
  int		a;
  int		b;

  i = 0;
  a = 0;
  b = 0;
  while (str[i] != '\n' && str[i] != '\0')
    {
      if (str[i] == carac || str[i] == '\n')
        {
          while (str[i] == carac)
            i++;
          a++;
          b = 0;
        }
      tab[a] = xmalloc(sizeof(char *) * ((countchar(str + i, carac) + 1)));
      while ((str[i] != carac)  && (str[i] != '\n') && (str[i] != '\0'))
        {
          tab[a][b++] = str[i];
          i++;
        }
      tab[a][b] = '\0';
    }
  tab[a + 1] = NULL;
}

char		**my_str_to_word_tab(int *i, char *str, char carac)
{
  char		**tab;

  *i = find_nb_word(str, carac);
  tab = xmalloc(sizeof(char *) * (*i + 1));
  complete_tab(str, tab, carac);
  return (tab);
}
