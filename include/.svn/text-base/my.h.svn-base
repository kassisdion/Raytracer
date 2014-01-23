/*
** my.h for my in /home/florian/raytracer/include
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Wed Apr  3 15:15:15 2013 florian faisant
** Last update Tue May 28 00:18:28 2013 florian faisant
*/

#ifndef MY_H_
# define MY_H_

# include	<stdio.h>
# include	"struct_raytracer.h"

int		my_putstr(char *str);
int		my_putchar(char c);
int		my_strlen(char *str);
int		error(char *message);
int		error_parsing(char *line, char *message);
void		fatal_error(char *message);
void		put_pixel_to_image(t_img *img, int x, int y, int c);
char		*get_next_line(const int fd);
int		my_strcmp(char *s1, char *s2);
void		*xmalloc(int size);
char		**my_str_to_word_tab(int *i, char *str, char carac);
double		my_getnbr(char *str);
void		my_put_in_list(t_list **list, t_obj *obj);
int		my_getnbr_hex(char *str);
void		destroy_list(t_data *data);
char		*get_line(FILE *fd);
void		free_tab(char **tab, int size);

#endif /* !MY_H_ */
