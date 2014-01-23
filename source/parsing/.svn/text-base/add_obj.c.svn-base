/*
** get_obj.c for get_obj in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sat Apr 13 00:43:31 2013 florian faisant
** Last update Sun Jun  2 18:14:32 2013 Caron Thomas
*/

#include	<string.h>
#include	"struct_raytracer.h"
#include	"my.h"
#include	"parsing.h"
#include	"raytracer.h"

static int	define_type(char *tmp)
{
  if (strncmp(tmp, "sphere", 6) == 0)
    return (SPHERE);
  if (strncmp(tmp, "plan", 4) == 0)
    return (PLAN);
  if (strncmp(tmp, "cylindre", 8) == 0)
    return (CYLINDRE);
  if (strncmp(tmp, "cone", 4) == 0)
    return (CONE);
  if (strncmp(tmp, "parabo", 6) == 0)
    return (PARABO);
  if (strncmp(tmp, "hyperbo", 7) == 0)
    return (HYPERBO);
  my_putstr(tmp);
  return (FAIL);
}

static int	add_other_commom(FILE *fd, t_obj *obj)
{
  if (obj->type != PLAN)
    if ((complete_rayon(fd, &(obj->rayon))) == FAIL)
      return (FAIL);
  if (complete_effect(fd, &obj->effect) == FAIL)
    return (FAIL);
  if (complete_def_norme(fd, &obj->def_norme) == FAIL)
    return (FAIL);
  if (complete_lim_min(fd, &obj->lim_min) == FAIL)
    return (FAIL);
  if (complete_lim_max(fd, &obj->lim_max) == FAIL)
    return (FAIL);
  return (SUCCES);
}

int		add_common(FILE *fd, t_list **list, char *tmp)
{
  t_obj		*obj;

  obj = xmalloc(sizeof(*obj));
  if ((obj->type = define_type(tmp)) == FAIL)
    return (FAIL);
  if ((complete_pos(fd, &(obj->pos))) == FAIL)
    return (FAIL);
  if ((complete_rot(fd, &(obj->rotation))) == FAIL)
    return (FAIL);
  if ((complete_color(fd, &(obj->color))) == FAIL)
    return (FAIL);
  if ((complete_brillance(fd, &(obj->brillance))) == FAIL)
    return (FAIL);
  if ((add_other_commom(fd, obj)) == FAIL)
    return (FAIL);
  my_put_in_list(list, obj);
  return (SUCCES);
}
