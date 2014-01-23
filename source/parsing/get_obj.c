/*
** get_obj.c for get_obj in /home/florian/git/rt/source/parsing
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sun Apr 14 15:42:54 2013 florian faisant
** Last update Tue May 28 00:32:33 2013 florian faisant
*/

#include	<stdlib.h>
#include	<string.h>
#include	"struct_raytracer.h"
#include	"raytracer.h"
#include	"my.h"
#include	"parsing.h"

int		get_obj(FILE *fd, t_data *data)
{
  char		*tmp;

  while ((tmp = get_line(fd)))
    {
      if (strncmp(tmp, "sphere", 6) == 0
	  || strncmp(tmp, "cylindre", 8) == 0
	  || strncmp(tmp, "plan", 4) == 0
	  || strncmp(tmp, "cone", 4) == 0
	  || strncmp(tmp, "parabo", 6) == 0
	  || strncmp(tmp, "hyperbo", 7) == 0)
	{
	  if (add_common(fd, &(data->list), tmp) == FAIL)
	    return (error("Sorry, can't init obj\n"));
	}
      else if (strncmp(tmp, "spot", 4) == 0)
	{
	  if (add_spot(fd, &(data->spot)) == FAIL)
	    return (error("sorry, can't init spot\n"));
	}
      else if (tmp[0] != '\0' && tmp[0] != '\n')
	return (error_parsing(tmp, "sorry, unknow object type : "));
      free(tmp);
    }
  return (SUCCES);
}
