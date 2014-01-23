/*
** gestion_light.c for gestion_light in /home/florian/git/rt/source/light
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Wed Apr 10 18:24:41 2013 florian faisant
** Last update Fri Jun  7 18:30:56 2013 florian faisant
*/

#include	<math.h>
#include	<stdlib.h>
#include	"struct_raytracer.h"
#include	"raytracer.h"
#include	"light.h"
#include	"move.h"
#include	"effect.h"

int		luminosite_cylindre(t_data *data, t_obj *obj, t_spot *spot,
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
  normal.x = ((inter.x * l.x) + (inter.y * l.y) + (0 * l.z));
  normal.y = sqrt(POW(l.x) + POW(l.y) + POW(l.z));
  normal.z = sqrt(POW(inter.x) + POW(inter.y) + POW(0));
  cos = calc_cos(obj, &normal, &inter);
  cos -= (sqrt(POW(l.x) + POW(l.y) + POW(l.z)) / 1000.000) / spot->power;
  if (power == 0)
    cos = -2.000;
  move_inv_for_light(data, obj, spot);
  color = check_effect(obj, &inter, data);
  return (normal_color(obj, cos, spot, color));
}

int		luminosite_plan(t_data *data, t_obj *obj, t_spot *spot,
				int power)
{
  t_coordonne	l;
  t_coordonne	inter;
  t_coordonne	normal;
  t_coordonne	vec_norme;
  double	cosi;
  int		color;

  vec_norme.x = 0;
  vec_norme.y = 0;
  vec_norme.z = 100;
  move_for_light(data, obj, spot);
  find_pos_inter(&(data->scene.vec), &inter, obj->d, &(data->scene.eyes));
  init_light_vec(spot->pos, &l, &inter);
  normal.x = ((0 * l.x) + (0 * l.y) + (vec_norme.z * l.z));
  normal.y = sqrt(POW(l.x) + POW(l.y) + POW(l.z));
  normal.z = sqrt(POW(0) + POW(0) + POW(vec_norme.z));
  cosi = calc_cos(obj, &normal, &inter);
  cosi -= (sqrt(POW(l.x) + POW(l.y) + POW(l.z)) / 1000.000) / spot->power;
  if (power == 0)
    cosi = -2.000;
  move_inv_for_light(data, obj, spot);
  color = check_effect(obj, &inter, data);
  return (normal_color(obj, cosi, spot, color));
}

int		luminosite_sphere(t_data *data, t_obj *obj, t_spot *spot,
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
  normal.x = ((inter.x * l.x) + (inter.y * l.y) + (inter.z * l.z));
  normal.y = sqrt(POW(l.x) + POW(l.y) + POW(l.z));
  normal.z = sqrt(POW(inter.x) + POW(inter.y) + POW(inter.z));
  cos = calc_cos(obj, &normal, &inter);
  cos -= (sqrt(POW(l.x) + POW(l.y) + POW(l.z)) / 1000.000) / spot->power;
  if (power == 0)
    cos = -2.000;
  move_inv_for_light(data, obj, spot);
  color = check_effect(obj, &inter, data);
  return (normal_color(obj, cos, spot, color));
}

int		luminosite_cone(t_data *data, t_obj *obj, t_spot *spot,
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
  normal.x = (inter.x * l.x) + (inter.y * l.y)
    + (inter.z * l.z) / tan(RAD(obj->rayon));
  normal.y = sqrt(POW(l.x) + POW(l.y)
		  + ((POW(l.z)) / tan(RAD(obj->rayon))));
  normal.z = sqrt(POW(inter.x) + POW(inter.y)
		  + ((POW(inter.z)) / tan(RAD(obj->rayon))));
  cos = calc_cos(obj, &normal, &inter);
  cos -= (sqrt(POW(l.x) + POW(l.y) + POW(l.z)) / 1000.000) / spot->power;
  if (power == 0)
    cos = -2.000;
  move_inv_for_light(data, obj, spot);
  color = check_effect(obj, &inter, data);
  return (normal_color(obj, cos, spot, color));
}

int		luminosite_parabo(t_data *data, t_obj *obj, t_spot *spot,
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
	      + (obj->rayon * 3.141592654 / 180) * l.z);
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
