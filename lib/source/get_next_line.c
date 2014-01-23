/*
** get_netx_line.c for get_netx_line in /home/caron_t/
** 
** Made by thomas caron
** Login   <caron_t@epitech.net>
** 
** Started on  Tue Dec  4 12:23:17 2012 thomas caron
** Last update Sun May 26 17:34:55 2013 florian faisant
*/

#include	<unistd.h>
#include	<fcntl.h>
#include	<stdlib.h>
#include	"get_next_line.h"

char		*get_next_line(const int fd)
{
  static char	line_read[SIZE_B];
  int		i;

  if ((get_n_l.line = malloc(sizeof (*get_n_l.line) * SIZE_B)) == NULL)
    return (NULL);
  if ((i = read(fd, line_read, SIZE_B)) == -1)
    return (NULL);
  i = 0;
  while (line_read[get_n_l.var] != '\n' && line_read[get_n_l.var])
    {
      get_n_l.line[i] = line_read[get_n_l.var];
      get_n_l.var++;
      i++;
    }
  if (line_read[get_n_l.var] == '\0')
    return (NULL);
  get_n_l.var += 1;
  get_n_l.line[i] = '\0';
  return (get_n_l.line);
}
