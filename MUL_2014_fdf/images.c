/*
** images.c for fdf in /home/dupard_e/rendus/MUL_2014_fdf
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Dec  4 11:04:42 2014 Erwan Dupard
** Last update Fri Dec  5 00:20:21 2014 Erwan Dupard
*/

#include <mlx.h>
#include "./include/my.h"
#include "./my_vectors.h"
#include "./images.h"

void		my_show_image(t_image *img, t_infos *s)
{
  mlx_put_image_to_window(s->mlx_ptr, s->win_ptr, img->img_p, 0, 0);
}

void		my_pixel_put_to_image(t_image *img, unsigned long color, t_vect pt)
{
  int pixel;
  int i;
  int nb;

  pixel = img->bpp/8;
  nb = (pt.y * img->size_line) + (pt.x * pixel);
  i = nb;
  while (i < (nb + pixel))
    {
      img->img_n[i] = mlx_get_color_value(img->s->mlx_ptr, color);
      i++;
    }
}
