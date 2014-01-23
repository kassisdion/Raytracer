/*
** my_put_in_list.c for my_put_in_list in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sat Apr 13 01:10:52 2013 florian faisant
** Last update Fri May 24 10:45:01 2013 florian faisant
*/

#include	"struct_raytracer.h"
#include	"my.h"

void		my_put_in_list(t_list **list, t_obj *obj)
{
  t_list	*elem;

  elem = xmalloc(sizeof(*elem));
  elem->obj = obj;
  elem->next = *list;
  *list = elem;
}
