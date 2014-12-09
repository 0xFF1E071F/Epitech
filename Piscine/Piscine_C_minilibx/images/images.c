/*
** images.c for images in /home/dupard_e/rendus/Piscine_C_minilibx/images
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Nov 13 18:10:10 2014 Erwan Dupard
** Last update Fri Nov 14 13:30:28 2014 Erwan Dupard
*/

#include <unistd.h>
#include <mlx.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "./include/my.h"
#include "./my_vectors.h"

int		usleep(int lol);

int		rand_val(int a, int b)
{
  srand(time(NULL));
  return (rand() % (b - a) + a);
}

int		mlx_pixel_put_to_images(t_infos s, char *img_oct, t_img inf, t_vect pos, int color)
{
  int		px;
  int		nb;
  int		i;

  px = (inf.bpp / 8); 
  nb = (pos.y * inf.sizeline) + (pos.x * px);
  i = nb;
  while (i < (nb + px))
    {
      img_oct[i] = mlx_get_color_value(s.mlx_ptr, color);
      i++;
    }
  return (0);
}


int		main()
{
  t_infos	s;
  t_img		inf;
  t_vect	v;
  char		*img_oct;
  void		*img_ptr;

  s.mlx_ptr = mlx_init();
  s.win_ptr = mlx_new_window(s.mlx_ptr, 500, 500, "test images");
  img_ptr = mlx_new_image(s.mlx_ptr, 500, 500);
  img_oct = mlx_get_data_addr(img_ptr, &inf.bpp, &inf.sizeline, &inf.endian);
  while (1)
    {
      v.x = 0;
      v.y = 0;
      while (v.y <= 500)
	{
	  mlx_pixel_put_to_images(s, img_oct, inf, v, rand_val(0, 0x00FFFFFF));
	  if (v.x >= 500)
	    {
	      v.y++;
	      v.x = 0;;
	    }
	  v.x++;
	}
      mlx_put_image_to_window(s.mlx_ptr, s.win_ptr, img_ptr, 0, 0);
      usleep(5000000);
    }
  mlx_loop(s.mlx_ptr);
  return (0);
}
