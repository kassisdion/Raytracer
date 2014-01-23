/*
** inter.h for inter in /home/florian/git/rt/include
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Tue Apr  9 23:02:56 2013 florian faisant
** Last update Fri May 10 21:02:16 2013 florian faisant
*/

#ifndef INTER_H_
# define INTER_H_

double	inter_sphere(t_coordonne *vect, t_coordonne *oeil, int rayon);
double	inter_plan(t_coordonne *vect, t_coordonne *oeil);
double	inter_cylindre(t_coordonne *vect, t_coordonne *oeil, int rayon);
double	inter_cone(t_coordonne *vect, t_coordonne *oeil, int rayon);
double	inter_parabo(t_coordonne *vect, t_coordonne *oeil, int rayon);
double	inter_hyperbo(t_coordonne *vect, t_coordonne *oeil, int rayon);
double	search_res(double a, double b, double d);

#endif /* !INTER_H_ */
