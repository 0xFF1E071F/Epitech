/*
** base.c for wolf3d in /home/dupard_e/rendus/MUL_2014_wolf3d
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Dec 16 13:25:04 2014 Erwan Dupard
** Last update Tue Dec 16 15:16:57 2014 Erwan Dupard
*/

#include "./ressources.h"
#include "./images.h"
#include "./include/my.h"
#include "./my_vectors.h"

void		get_sky_and_floor(t_infos *s)
{
  int		line;
  int		px;
  t_vect	pt;

  px = 0;
  line = 0;
  my_printf("[*] Drawing Sky and Floor..\n");
  while (line <= s->win_y)
    {
      while (px <= s->win_x)
  	{
  	  pt.x = px;
  	  pt.y = line;
  	  if (line < s->win_y / 2)
  	    my_pixel_put_to_image(SKY, pt, s);
  	  else
  	    my_pixel_put_to_image(FLOOR, pt, s);
  	  px++;
  	}
      px = 0;
      line++;
    }
}
