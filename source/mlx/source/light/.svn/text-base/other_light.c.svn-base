/*
** other_light.c for other_light in /home/florian/git/rt
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Fri May 10 21:05:49 2013 florian faisant
** Last update Fri Jun  7 18:38:37 2013 florian faisant
*/

#include	<math.h>
#include	"struct_raytracer.h"
#include	"raytracer.h"
#include	"light.h"
#include	"move.h"
#include	"effect.h"

int		luminosite_hyperbo(t_data *data, t_obj *obj, t_spot *spot,
				   int power)
{
  t_coordonne	l;
  t_coordonne	inter;
  t_coordonne	normal;
  double	cos;
  int		color;

  move_for_light(data, obj, spot);
  find_pos_inter(&(data->scene.vec), &inter, obj->d, &(data->scene.eyes));
  init_light_vec(spot->pos, &l, &inter);
  normal.x = ((inter.x * l.x) + (inter.y * l.y)
	      + (obj->rayon * 3.141592654 / 180 ) * l.z);
  normal.y = sqrt(POW(l.x) + POW(l.y) + POW(l.z));
  normal.z = sqrt(POW(inter.x) + POW(inter.y)
		  + POW(- (obj->rayon * 3.141592654 / 180)));
  cos = calc_cos(obj, &normal, &inter);
  cos -= (sqrt(POW(l.x) + POW(l.y) + POW(l.z)) / 1000.000) / spot->power;
  if (power == 0)
    cos = -2.000;
  move_inv_for_light(data, obj, spot);
  color = check_effect(obj, &inter, data);
  return (normal_color(obj, cos, spot, color));
}
