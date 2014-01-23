/*
** free_tab.c for free_tab in /home/florian/git/generaytacer
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Tue May 28 00:17:17 2013 florian faisant
** Last update Tue May 28 00:22:29 2013 florian faisant
*/

#include	<stdlib.h>

void		free_tab(char **tab, int size)
{
  int		i;

  i = 0;
  while (i < size && (tab[i] != NULL))
    {
      free(tab[i]);
      i++;
    }
}
