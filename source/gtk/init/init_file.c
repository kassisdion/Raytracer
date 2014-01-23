/*
** init_file.c for init_file in /home/caron/igraph/generaytacer/source/gtk/init
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Fri May  3 13:24:36 2013 Caron Thomas
** Last update Tue Jun  4 02:24:04 2013 florian faisant
*/

#include	<unistd.h>
#include	<fcntl.h>
#include	"my.h"
#include	"init.h"
#include	"gen.h"
#include	"error.h"

t_wid		*init_file(t_wid *wid)
{
  int		fd;
  char		*link;

  if ((fd = open("./resource/save", O_RDONLY)) == -1)
    error_gtk("error : ./resource/save don't open");
  link = get_next_line(fd);
  if (link[0] != '1' && link[1] != 0)
    init_scene(&wid->data, link);
  return (wid);
}
