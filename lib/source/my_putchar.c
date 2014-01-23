/*
** my_putchar.c for my_putchar in /home/florian/raytracer/lib
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Wed Apr  3 14:41:40 2013 florian faisant
** Last update Wed Apr  3 15:04:15 2013 florian faisant
*/

#include	<unistd.h>

int		my_putchar(char c)
{
  return (write(1, &c, 1));
}
