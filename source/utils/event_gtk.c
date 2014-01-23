/*
** event_on_off.c for event_on_off in /home/caron/git/generaytacer/source/gtk/utils
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Sat Jun  1 12:27:13 2013 Caron Thomas
** Last update Sun Jun  2 15:14:13 2013 Caron Thomas
*/

#include	<gtk/gtk.h>

int		event_on_off(int on_off)
{
  if (on_off)
    gtk_main();
  else
    gtk_main_quit();
  return (0);
}
