/*
** images.c for fdf in /home/dupard_e/rendus/MUL_2014_fdf
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Dec  4 11:04:42 2014 Erwan Dupard
** Last update Fri Dec 19 21:51:38 2014 Erwan Dupard
*/

#include <mlx.h>
#include "./include/my.h"
#include "./ressources.h"

void		my_show_image(t_infos *s)
{
  mlx_put_image_to_window(s->mlx_ptr, s->win_ptr, s->img.img_p, 0, 0);
}

void		clean_image(t_infos *s)
{
  int		i;

  i = 0;
  while (i++ <= (s->win_y * s->img.size_line))
    s->img.img_n[i] = 0;
}

void		my_pixel_put_to_image(unsigned long color, t_vect pt, t_infos *s)
{
  int		offset;

  offset = (s->img.size_line  * pt.y) + (pt.x * (s->img.bpp / 8));
  s->img.img_n[offset] = (color & 0x000000FF);
  s->img.img_n[offset + 1] = ((color & 0x0000FF00) >> 8);
  s->img.img_n[offset + 2] = ((color & 0x00FF0000) >> 16);
  s->img.img_n[offset + 3] = ((color & 0xFF000000) >> 24);
}
