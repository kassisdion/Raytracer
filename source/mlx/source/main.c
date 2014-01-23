/*
** main.c for main in /home/florian/raytracer/source
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Wed Apr  3 15:18:25 2013 florian faisant
** Last update Thu Jun  6 01:41:37 2013 florian faisant
*/

#include	<stdio.h>
#include	<stdlib.h>
#include	<mlx.h>
#include	"struct_raytracer.h"
#include	"gestion_event.h"
#include	"init.h"
#include	"calc.h"
#include	"my.h"

static int	init_data(t_data *data)
{
  data->option.preview = PREVIEW_MODE;
  data->option.aff_mode = AFF_MODE;
  data->option.first_aa = ANTI_ALIASING;
  data->option.first_aa = FIRST_ANTI_ALIASING;
  data->option.font = FONT_MODE;
  data->option.negative = NEGATIVE_COLOR;
  data->option.sepia = SEPIA_COLOR;
  data->option.cyanotype = CYANO_COLOR;
  data->option.black_white = BLACK_WHITE_COLOR;
  data->texture.activate = 0;
  data->perlin.activate = 0;
  return (SUCCES);
}

int		main(int argc, char **argv)
{
  t_data	data;

  if (argc != 2)
    return (error("Sorry, too feew argument\n"));
  my_putstr("====\tInit    \t...\t====\n");
  if (init_mlx(&data) == FAIL)
    return (FAIL);
  my_putstr("====\tParsing  \t...\t====\n");
  if (init_scene(&data, argv[1]) == FAIL)
    return (FAIL);
  my_putstr("====\tRendering\t...\t====\n");
  init_data(&data);
  manage_calc(&data);
  my_putstr("\n====\tDone            \t====\n");
  gestion_event(&data);
  return (SUCCES);
}
