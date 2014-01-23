/*
** write_conf.c for write_conf in /home/caron/igraph/generaytacer/source/write
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Tue May  7 14:28:08 2013 Caron Thomas
** Last update Sun Jun  2 18:09:05 2013 Caron Thomas
*/

#include	<stdlib.h>
#include	"write.h"
#include	"gen.h"
#include	"raytracer.h"

int		write_conf(t_wid *wid)
{
  t_spot	*tmp_s;
  t_list	*tmp;

  tmp = wid->data.list;
  tmp_s = wid->data.spot;
  write_eyes(wid->file.fd, &wid->data.scene.eyes);
  while (tmp_s != NULL)
    {
      write_spot(wid->file.fd, tmp_s);
      tmp_s = tmp_s->next;
    }
  while (tmp != NULL)
    {
      write_obj(wid->file.fd, tmp->obj);
      tmp = tmp->next;
    }
  return (SUCCES);
}
