/*
** write_obj.c for write_obj in /home/florian/git/generaytacer/source/write
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Mon May  6 15:30:48 2013 florian faisant
** Last update Sun Jun  9 14:03:59 2013 florian faisant
*/

#include	<stdio.h>
#include	"struct_raytracer.h"
#include	"raytracer.h"

static void	write_type(FILE *fp, int type)
{
  if (type == SPHERE)
    fprintf(fp, "sphere\n");
  else if (type == PLAN)
    fprintf(fp, "plan\n");
  else if (type == CYLINDRE)
    fprintf(fp, "cylindre\n");
  else if (type == CONE)
    fprintf(fp, "cone\n");
  else if (type == PARABO)
    fprintf(fp, "parabo\n");
  else if (type == HYPERBO)
    fprintf(fp, "hyperbo\n");
}

static void	write_commom_carac(FILE *fp, t_obj *obj)
{
  fprintf(fp, "pos %d %d %d\n",
	  (int)obj->pos.x,
	  (int)obj->pos.y,
	  (int)obj->pos.z);
  fprintf(fp, "rot %d %d %d\n",
	  (int)obj->rotation.x,
	  (int)obj->rotation.y,
	  (int)obj->rotation.z);
  fprintf(fp, "color 0x%06x\n", obj->color);
  fprintf(fp, "brillance %d\n", (int)obj->brillance);
  if (obj->type != PLAN)
    fprintf(fp, "rayon %d\n", obj->rayon);
  fprintf(fp, "effect %d\n", obj->effect);
  fprintf(fp, "def_norme %d\n", obj->def_norme);
  fprintf(fp, "lim_min %d %d %d\n", (int)obj->lim_min.x,
	  (int)obj->lim_min.y, (int)obj->lim_min.z);
  fprintf(fp, "lim_max %d %d %d\n\n", (int)obj->lim_max.x,
	  (int)obj->lim_max.y, (int)obj->lim_max.z);
}

void		write_obj(FILE *fp, t_obj *obj)
{
  write_type(fp, obj->type);
  write_commom_carac(fp, obj);
}

void		write_eyes(FILE *fp, t_eyes *eyes)
{
  fprintf(fp, "eyes\n");
  fprintf(fp, "pos %d %d %d\n",
	  (int)eyes->pos.x,
	  (int)eyes->pos.y,
	  (int)eyes->pos.z);
  fprintf(fp, "rot %d %d %d\n\n",
	  (int)eyes->rotation.x,
	  (int)eyes->rotation.y,
	  (int)eyes->rotation.z);
}

void		write_spot(FILE *fp, t_spot *spot)
{
  fprintf(fp, "spot\n");
  fprintf(fp, "pos %d %d %d\n",
	  (int)spot->pos->x,
	  (int)spot->pos->y,
	  (int)spot->pos->z);
  fprintf(fp, "color 0x%06x\n", spot->color);
  fprintf(fp, "power %d\n\n", spot->power);
}
