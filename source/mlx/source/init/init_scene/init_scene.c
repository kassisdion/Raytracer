/*
** init_scene.c for init_scene in /home/florian/raytracer
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sun Apr  7 22:21:14 2013 florian faisant
** Last update Tue May 28 16:51:02 2013 florian faisant
*/

#include	<unistd.h>
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<fcntl.h>
#include	"my.h"
#include	"parsing.h"
#include	"raytracer.h"
#include	"struct_raytracer.h"

static int	check_list(t_data *data)
{
  t_list	*tmp;
  int		nb_obj;

  nb_obj = 0;
  tmp = data->list;
  while (tmp != NULL)
    {
      tmp = tmp->next;
      nb_obj++;
    }
  if (nb_obj == 0)
    my_putstr("Warning : you have initialized 0 object\n");
  if (data->spot == NULL)
    return (error("Sorry, you have to define a light\n"));
  return (SUCCES);
}

int		init_scene(t_data *data, char *config_name)
{
  FILE		*fd;

  data->list = NULL;
  data->spot = NULL;
  data->option.first_aa = FIRST_ANTI_ALIASING;
  data->option.final_aa = ANTI_ALIASING;
  if ((fd = fopen(config_name, "r")) == NULL)
    return (error("Sorry, can't open the config\n"));
  if (get_eyes(&(data->scene.eyes), fd) == FAIL)
    return (error("Sorry, can't init eyes\n"));
  if (get_obj(fd, data) == FAIL)
    return (error("Sorry, can't init obj_list\n"));
  fclose(fd);
  if (check_list(data) == FAIL)
    return (FAIL);
  return (SUCCES);
}
