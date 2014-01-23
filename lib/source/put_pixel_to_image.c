/*
** put_pixel_to_image.c for put_pixel_to_image in /home/florian/raytracer/lib/source
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Sun Apr  7 20:58:28 2013 florian faisant
** Last update Wed Jan 22 16:58:29 2014 florian faisant
*/

#include	"struct_raytracer.h"

void		put_pixel_to_image(t_img *img, int x, int y, int c)
{
  int		i;
  int		j;

  if (x > 0 && y > 0 && x < img->x && y < img->y)
    {
      i = (img->x * y + x) * (img->bpp / 8);
      j = i;
      while (j < i + (img->bpp / 8) && j > 0 && i > 0)
        {
          if (img->endian == 0)
            img->data[j] = (c >> (8 * (j - i))) & 0xFF;
          else
            img->data[j] = (c >> (8 * (i - j))) & 0xFF;
          j++;
        }
    }
}

