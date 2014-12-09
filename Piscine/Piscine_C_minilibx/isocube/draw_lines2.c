/*
** draw_lines2.c for draw_lines2 in /home/dupard_e/rendus/Piscine_C_minilibx/isocube
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov 11 16:42:30 2014 Erwan Dupard
** Last update Tue Nov 11 16:47:56 2014 Erwan Dupard
*/

#include <mlx.h>
#include "./my_vectors.h"
#include "./include/my.h"
#include "./draw_lines.h"

void		draw_ver_line(t_infos s, t_vect a, t_vect b, int color)
{
  t_vect	c;

  c.x = a.x;
  c.y = a.y;
  if (b.y >= a.y)
    {
      while (c.y <= b.y)
	{
	  mlx_pixel_put(s.mlx_ptr, s.win_ptr, c.x, c.y, color);
	  c.y++;
	}
    }
  else
    {
      while (c.y >= b.y)
	{
	  mlx_pixel_put(s.mlx_ptr, s.win_ptr, c.x, c.y, color);
	  c.y--;
	}
    }
}

void		draw_hor_line(t_infos s, t_vect a, t_vect b, int color)
{
  t_vect	c;

  c.x = a.x;
  c.y = a.y;
  if (b.x >= a.x)
    {
      while (c.x <= b.x)
	{
	  mlx_pixel_put(s.mlx_ptr, s.win_ptr, c.x, c.y, color);
	  c.x++;
	}
    }
  else
    {
      while (c.x >= b.x)
	{
	  mlx_pixel_put(s.mlx_ptr, s.win_ptr, c.x, c.y, color);
	  c.x--;
	}
    }
}
