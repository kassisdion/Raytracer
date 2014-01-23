/*
** texture.c for texture in /home/florian/git/generaytacer/source/mlx/source/texture
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Thu May 30 19:18:08 2013 florian faisant
** Last update Wed Jun  5 13:45:28 2013 florian faisant
*/

#include	<stdlib.h>
#include	<mlx.h>
#include	"raytracer.h"
#include	"struct_raytracer.h"
#include	"my.h"
#include	"light.h"
#include	"move.h"

int		load_each_texture(t_each_text *texture, char *path,
				  t_data *data)
{
  texture->texture = mlx_xpm_file_to_image(data->windo.mlx_ptr,
					   path,
					   &(texture->size_x),
					   &(texture->size_y));
  if (texture->texture == NULL)
    return (FAIL);
  texture->data = mlx_get_data_addr(texture->texture,
				    &(texture->bpp),
				    &(texture->sizeline),
				    &(texture->endian));
  return (SUCCES);
}

int		load_texture(t_data *data)
{
  if (load_each_texture(&(data->texture.text1), WOOD,
			data) == FAIL)
    return (error("Sorry, can't load texture.xpm\n"));
  if (load_each_texture(&(data->texture.text2), SEA,
			data) == FAIL)
    return (error("Sorry, can't load wood.xpm\n"));
  if (load_each_texture(&(data->texture.text3), STONE,
			data) == FAIL)
    return (error("Sorry, can't load stun.xpm\n"));
  data->texture.activate = 1;
  return (SUCCES);
}

int		data_pixel_get(int x, int y, t_each_text *texture)
{
  int		pixel_size;
  char		*pixel_pos;
  int		color;
  int		r;
  int		v;
  int		b;

  pixel_size = texture->bpp / 8;
  pixel_pos = texture->data + y * texture->sizeline
    + x * pixel_size;
  color = 0;
  r = pixel_pos[pixel_size - 2];
  v = pixel_pos[pixel_size - 3];
  b =  pixel_pos[pixel_size - 4];
  color = ((r << 16) & 0xff0000)
    | ((v << 8) & 0xff00)
    | ((b & 0xff));
  return (color);
}

static int	each_texture(t_each_text *texture, t_coordonne *inter)
{
  int		pos_x;
  int		pos_y;
  int		color;

  pos_y = (int)inter->y % (texture->size_y);
  pos_x = (int)inter->x % (texture->size_x);
  color = data_pixel_get(abs(pos_x), abs(pos_y), texture);
  return (color);
}

int		aply_texture(t_obj *obj, t_data *data)
{
  t_coordonne	inter;

  find_pos_inter(&data->scene.vec, &inter, obj->d, &data->scene.eyes);
  if (data->texture.activate == 0)
    if (load_texture(data) == FAIL)
      return (FAIL);
  if (obj->effect == 7)
    return (each_texture(&(data->texture.text1), &inter));
  else if (obj->effect == 8)
    return (each_texture(&(data->texture.text2), &inter));
  else if (obj->effect == 9)
    return (each_texture(&(data->texture.text3), &inter));
  return (error("Sorry, unknow effect\n"));
}
