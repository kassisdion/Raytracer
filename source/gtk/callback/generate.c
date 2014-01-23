/*
** save.c for save in /home/caron/igraph/generaytacer/source/event
** 
** Made by Caron Thomas
** Login   <caron_t@epitech.net>
** 
** Started on  Fri Apr 26 16:17:44 2013 Caron Thomas
** Last update Sun Jun  2 15:16:29 2013 Caron Thomas
*/

#include	<gtk/gtk.h>
#include	<stdio.h>
#include	<unistd.h>
#include	"write.h"
#include	"init.h"
#include	"calc.h"
#include	"gen.h"
#include	"utils.h"

void		gen(GtkWidget *but, gpointer data)
{
  t_wid		*wid;

  wid = (t_wid *)(data);
  if (wid->gen)
    {
      wid->data.update = 1;
      wid->in_gen = 1;
      while (wid->data.update == 1)
	{
	  usleep(200);
	}
    }
}
