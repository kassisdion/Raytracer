/*
** perlin.c for perlin in /home/florian/git/rt/source/perlin
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Thu May  9 03:54:48 2013 florian faisant
** Last update Mon Jun  3 21:36:57 2013 florian faisant
*/

#include	<time.h>
#include	<math.h>
#include	<stdlib.h>
#include	<sys/types.h>
#include	<unistd.h>
#include	"perlin.h"
#include	"raytracer.h"
#include	"my.h"

void		init_bruit2d(t_perlin *perlin, int p, int n, t_data *data)
{
  int		i;
  double	*value;
  int		size_x;
  int		size_y;

  if (data->perlin.activate == 0)
    data->perlin.activate = 1;
  else
    return;
  i = 0;
  size_x = (int) (ceil(SIZE_WIN_X * pow(2, n  - 1)  / p));
  size_y = (int) ceil(SIZE_WIN_X * pow(2, n  - 1)  / p);
  perlin->x = size_x;
  perlin->y = size_y;
  value = xmalloc(sizeof(double) * (size_x * size_y + 1));
  srand(time(NULL) * getpid());
  while (i < size_x * size_y)
    {
      value[i] = ((double)rand()) / RAND_MAX;
      i++;
    }
  perlin->perlin_tab = value;
}

double		bruit_2d(int i, int j, t_perlin *perlin)
{
  double	value;
  int		index;

  index = (i * perlin->x + j) % (perlin->x * perlin->y);
  value = perlin->perlin_tab[index];
  return (value);
}

static int	make_perlin_color(double density, t_obj *obj)
{
  int		r;
  int		v;
  int		b;
  int		color;

  r = 255 * (1 - density) +  (((obj->color) >> 16) & 0xFF) * density;
  v = 255 * (1 - density) + (((obj->color) >> 8) & 0xFF) * density;
  b = 255 * (1 - density) + (((obj->color)) & 0xFF) * density;
  color = ((r << 16) & 0xFF0000)
    | ((v << 8) & 0xFF00)
    | (b & 0xFF);
  return (color);
}

void		my_perlin(double bruit_rdm, int opt, t_obj *obj, double x)
{
  double	density;

  density = 0.000;
  if (opt == 4)
    density = 1 - sqrt(fabs(sin(2 * 3.141592654 * bruit_rdm)));
  else if (opt == 5)
    density = (1
	       - cos(LIGNES * 2 * 3.141592654
		     * (x / SIZE_WIN_Y + PERT * bruit_rdm))) / 2;
  else if (opt == 6)
    density = bruit_rdm;
  else
    my_putstr("Warning, unknow effect, your object will be white\n");
  obj->color = make_perlin_color(density, obj);
}
