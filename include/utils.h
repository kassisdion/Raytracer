/*
** utils.h for utils in /home/caron/git/generaytacer/include
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Sat Jun  1 12:32:00 2013 Caron Thomas
** Last update Mon Jun  3 09:39:21 2013 Caron Thomas
*/

#ifndef UTILS_H_
# define UTILS_H_

# include	"struct_raytracer.h"

int		event_on_off(int on_off);
int		select_item(int button, int x, int y, t_data *data);
t_obj           *find_nearst_obj(t_list *list);
void            complete_distance(t_list *list, t_data *data);

#endif /* !UTILS_H_ */
