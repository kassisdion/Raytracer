/*
** parsing.h for parsing in /home/florian/raytracer
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sun Apr  7 22:37:10 2013 florian faisant
** Last update Fri Jun  7 18:35:38 2013 florian faisant
*/

#ifndef PARSING_H_
# define PARSING_H_

# include	<stdio.h>
# include	"struct_raytracer.h"

int		get_eyes(t_eyes *eyes, FILE *fd);
int		get_obj(FILE *fd, t_data *data);
int		complete_pos(FILE *fd, t_coordonne *eyes);
int		complete_rot(FILE *fd, t_coordonne *eyes);
int		complete_trans(FILE *fd, t_coordonne *eyes);
int		complete_rayon(FILE *fd, int *rayon);
int		complete_color(FILE *fd, int *color);
int		complete_brillance(FILE *fd, float *brillance);
int		complete_effect(FILE *fd, int *effect);
int		complete_def_norme(FILE *fd, int *def_norme);
int		add_common(FILE *fd, t_list **list, char *tmp);
int		add_spot(FILE *fd, t_spot **spot);
int		complete_lim_min(FILE *fd, t_coordonne *lim);
int		complete_lim_max(FILE *fd, t_coordonne *lim);
void		complete_list_spot(t_spot **spot, int color, t_coordonne *pos,
				   int power);

#endif /* !PARSING_H_ */
