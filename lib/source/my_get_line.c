/*
** my_get_line.c for my_get_line in /home/florian/git/generaytacer
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sat May 11 21:04:41 2013 florian faisant
** Last update Sat May 11 21:17:01 2013 florian faisant
*/

#include	<stdio.h>

char		*get_line(FILE *fd)
{
  ssize_t	read;
  char		*line;
  size_t	len;

  line = NULL;
  if ((read = getline(&line, &len, fd) < 0))
    return (NULL);
  else
    return (line);
}
