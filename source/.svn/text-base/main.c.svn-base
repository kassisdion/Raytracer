/*
** main.c for main in /home/florian/git/generaytacer/source
**
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
**
** Started on  Mon Apr 22 19:41:36 2013 florian faisant
** Last update Fri Jun  7 09:12:34 2013 Caron Thomas
*/

#include	<gtk/gtk.h>
#include	<stdlib.h>
#include	<unistd.h>
#include	"generaytacer.h"
#include	"init.h"
#include	"gen.h"
#include	"init_gtk.h"
#include	"pos.h"

int		main(int ac, char **av)
{
  t_wid		wid;

  ac = 0;
  av = NULL;
  gtk_init(&ac, &av);
  init_win(&wid);
  init_index(&wid);
  init_edition(&wid);
  init_window(&wid);
  init_surface(&wid);
  init_sp_surface(&wid);
  init_help(&wid);
  init_thread(&wid.data);
  pos_box(&wid);
  gtk_widget_show_all(wid.win->win);
  gtk_main();
  if (write(1, "\n", 1) == -1)
    return (1);
  return (0);
}
