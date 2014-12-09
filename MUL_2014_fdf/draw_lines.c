/*
** draw_lines.c for draw_lines in /home/dupard_e/rendus/Piscine_C_minilibx/lines
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov  4 13:15:27 2014 Erwan Dupard
** Last update Thu Dec  4 19:06:06 2014 Erwan Dupard
*/

#include <mlx.h>
#include "./my_vectors.h"
#include "./draw_lines.h"
#include "./images.h"

void		draw_lines_to_image(t_image *img, t_vect a, t_vect b, int color)
{
  t_vect	v;

  v.x = (b.x - a.x);
  v.y = (b.y - a.y);
  if ((a.x < b.x) && (ABS(v.x) > ABS(v.y)))
    draw_line1(img, a, b, color);
  if ((a.x > b.x) && (ABS(v.x) > ABS(v.y)))
    draw_line2(img, a, b, color);
  if ((a.x < b.x) && (ABS(v.x) < ABS(v.y)))
    draw_line3(img, a, b, color);
  if ((a.x > b.x) && (ABS(v.x) < ABS(v.y)))
    draw_line4(img, a, b, color);
}

void		draw_line1(t_image *img, t_vect a, t_vect b, int color)
{
  t_vect	cur;

  cur.x = a.x;
  while (cur.x <= b.x)
    {
      cur.y = a.y + ((b.y - a.y) * (cur.x - a.x)) / (b.x - a.x);
      my_pixel_put_to_image(img, color, cur);
      cur.x++;
    }
}

void		draw_line2(t_image *img, t_vect a, t_vect b, int color)
{
  t_vect	cur;

  cur.x = a.x;
  while (cur.x >= b.x)
    {
      cur.y = a.y + ((b.y - a.y) * (cur.x - a.x)) / (b.x - a.x);
      my_pixel_put_to_image(img, color, cur);
      cur.x--;
    }
}

void		draw_line3(t_image *img, t_vect a, t_vect b, int color)
{
  t_vect	cur;

  cur.x = a.x;
  cur.y = a.y;
  while (cur.x <= b.x)
    {
      cur.y = a.y + ((b.y - a.y) * (cur.x - a.x)) / (b.x - a.x);
      my_pixel_put_to_image(img, color, cur);
      cur.x++;
    }
}

void		draw_line4(t_image *img, t_vect a, t_vect b, int color)
{
  t_vect	cur;

  cur.x = a.x;
  while (cur.x >= b.x)
    {
      cur.y = a.y + ((b.y - a.y) * (cur.x - a.x)) / (b.x - a.x);
      my_pixel_put_to_image(img, color, cur);
      cur.x--;
    }
}
