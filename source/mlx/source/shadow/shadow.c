/*
** shadow.c for shadow in /home/florian/git/rt/source/light
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sat Apr 13 23:41:43 2013 florian faisant
** Last update Tue Jun  4 03:18:47 2013 florian faisant
*/

#include	<stdlib.h>
#include	"struct_raytracer.h"
#include	"raytracer.h"
#include	"inter.h"
#include	"light.h"
#include	"shadow.h"
#include	"move.h"

static double	each_shadow(t_list *tmp, t_coordonne *inter, t_coordonne *l)
{
  double	d;

  d = 0.0000;
  if (tmp->obj->type == PLAN)
    d = shadow_plan(inter, l, tmp);
  else if (tmp->obj->type == CYLINDRE)
    d = shadow_cylindre(inter, l, tmp);
  else if (tmp->obj->type == SPHERE)
    d = shadow_sphere(inter, l, tmp);
  else if (tmp->obj->type == CONE)
    d = shadow_cone(inter, l, tmp);
  else if (tmp->obj->type == PARABO)
    d = shadow_parabo(inter, l, tmp);
  else if (tmp->obj->type == HYPERBO)
    d = shadow_hyperbo(inter, l, tmp);
  return (d);
}

static int	check_limt(t_obj *obj, t_coordonne *inter)
{
  int		rtr;

  if ((inter->x < obj->lim_min.x) && (obj->lim_min.x != 0.000))
    rtr = FAIL;
  else if ((inter->y < obj->lim_min.y) && (obj->lim_min.y != 0.000))
    rtr = FAIL;
  else if ((inter->z < obj->lim_min.z) && (obj->lim_min.z != 0.000))
    rtr = FAIL;
  else if ((inter->x > obj->lim_max.x) && (obj->lim_max.x != 0.000))
    rtr = FAIL;
  else if ((inter->y > obj->lim_max.y) && (obj->lim_max.y != 0.000))
    rtr = FAIL;
  else if ((inter->z > obj->lim_max.z) && (obj->lim_max.z != 0.000))
    rtr = FAIL;
  else
    rtr = SUCCES;
  return (rtr);
}

static int	calc_shadow(t_data *data, t_obj *current,
			    t_coordonne *spot_pos)
{
  t_list	*tmp;
  double	d;
  t_coordonne	inter;
  t_coordonne	l;

  tmp = data->list;
  d = 0.0000;
  find_pos_inter(&(data->scene.vec), &inter, current->d, &(data->scene.eyes));
  init_light_vec(spot_pos, &l, &inter);
  while (tmp != NULL)
    {
      if (tmp->obj != current)
	{
	  if (check_limt(tmp->obj, &inter) != FAIL)
	    {
	      d = each_shadow(tmp, &inter, &l);
	      if (d > 0.0001 && d < 1.000)
		return (0);
	    }
	}
      tmp = tmp->next;
    }
  return (1);
}

int		shadow(t_data *data, t_obj *current, t_spot *spot)
{
  int		power;

  power = calc_shadow(data, current, spot->pos);
  return (power);
}
