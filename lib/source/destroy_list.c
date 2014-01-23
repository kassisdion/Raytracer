/*
** destroy_list.c for destroy_list in /home/florian/git/generaytacer/lib/source
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sat May 11 17:39:58 2013 florian faisant
** Last update Sat May 11 17:55:30 2013 Caron Thomas
*/

#include	<stdlib.h>
#include	"struct_raytracer.h"

static void	destroy_spot(t_data *data)
{
  t_spot	*prev;
  t_spot	*cur;

  cur = data->spot;
  while (cur != NULL)
    {
      prev = cur;
      cur = cur->next;
      free(prev);
    }
}

static void	destroy_list_obj(t_data *data)
{
  t_list	*prev;
  t_list	*cur;

  cur = data->list;
  while (cur != NULL)
    {
      prev = cur;
      cur = cur->next;
      free(prev);
    }
}

void		destroy_list(t_data *data)
{
  destroy_spot(data);
  destroy_list_obj(data);
}
