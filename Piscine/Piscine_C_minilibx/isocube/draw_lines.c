/*
** draw_lines.c for draw_lines in /home/dupard_e/rendus/Piscine_C_minilibx/lines
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov  4 13:15:27 2014 Erwan Dupard
** Last update Tue Nov 11 16:41:58 2014 Erwan Dupard
*/

#include <mlx.h>
#include "./my_vectors.h"
#include "./include/my.h"
#include "./draw_lines.h"

void		draw_lines(t_infos s, t_vect a, t_vect b, int color)
{
  t_vect	v;

  v.x = (b.x - a.x);
  v.y = (b.y - a.y);
  if ((a.x < b.x) && (ABS(v.x) >= ABS(v.y)))
    draw_line1(s, a, b, color);
  if ((a.x > b.x) && (ABS(v.x) >= ABS(v.y)))
    draw_line2(s, a, b, color);
  if ((a.x < b.x) && (ABS(v.x) <= ABS(v.y)))
    draw_line3(s, a, b, color);
  if ((a.x > b.x) && (ABS(v.x) <= ABS(v.y)))
    draw_line4(s, a, b, color);
  if ((a.x == b.x))
    draw_ver_line(s, a, b, color);
  if (a.y == b.y)
    draw_hor_line(s, a, b, color);
}

void		draw_line1(t_infos s, t_vect a, t_vect b, int color)
{
  t_vect	cur;

  cur.x = a.x;
  while (cur.x <= b.x)
    {
      mlx_pixel_put(s.mlx_ptr,
		    s.win_ptr,
		    cur.x,
		    a.y + ((b.y - a.y) * (cur.x - a.x)) / (b.x - a.x),
		    color);
      cur.x++;
    }
}

void		draw_line2(t_infos s, t_vect a, t_vect b, int color)
{
  t_vect	cur;

  cur.x = a.x;
  while (cur.x >= b.x)
    {
      mlx_pixel_put(s.mlx_ptr,
		    s.win_ptr,
		    cur.x,
		    a.y + ((b.y - a.y) * (cur.x - a.x)) / (b.x - a.x),
		    color);
      cur.x--;
    }
}

void		draw_line3(t_infos s, t_vect a, t_vect b, int color)
{
  t_vect	cur;

  cur.x = a.x;
  while (cur.x <= b.x)
    {
      mlx_pixel_put(s.mlx_ptr,
		    s.win_ptr,
		    cur.x,
		    a.x + ((b.x - a.x) * (cur.y - a.y)) / (b.y - a.y),
		    color);
      cur.x++;
    }
}

void		draw_line4(t_infos s, t_vect a, t_vect b, int color)
{
  t_vect	cur;

  cur.x = a.x;
  while (cur.x >= b.x)
    {
      mlx_pixel_put(s.mlx_ptr,
		    s.win_ptr,
		    cur.x,
		    a.x + ((b.x - a.x) * (cur.y - a.y)) / (b.y - a.y),
		    color);
      cur.x--;
    }
}
