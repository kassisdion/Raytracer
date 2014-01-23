/*
** rm_obj.c for rm_obj in /home/florian/git/generaytacer
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Thu May 23 16:46:03 2013 florian faisant
** Last update Thu May 23 16:46:39 2013 florian faisant
*/

#include	<stdlib.h>
#include	"struct_raytracer.h"
#include	"raytracer.h"
#include	"my.h"

int		rm_obj(t_list **list, int index)
{
  int		i;
  t_list	*prev;
  t_list	*current;

  i = 0;
  current = *list;
  prev = NULL;
  while ((i < index) && (current != NULL))
    {
      prev = current;
      current = current->next;
      i++;
    }
  if (current == NULL)
    return (error("Sorry, index error during the obj's suppresion\n"));
  if (prev)
    prev->next = current->next;
  else
    *list = current->next;
  free(current);
  return (SUCCES);
}
