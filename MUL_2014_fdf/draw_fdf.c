/*
** draw_fdf.c for fdf in /home/dupard_e/rendus/MUL_2014_fdf
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov 11 12:57:57 2014 Erwan Dupard
** Last update Fri Dec  5 00:16:22 2014 Erwan Dupard
*/

#include <mlx.h>
#include <unistd.h>
#include <stdlib.h>
#include "./draw_fdf.h"
#include "./draw_lines.h"
#include "./include/my.h"
#include "./my_gettab.h"
#include "./my_vectors.h"

void		usleep(int t);

t_vect		*get_elem_by_offset(t_list *list, int offset)
{
  int		i;
  t_elem	*e;
  t_vect	*ret;

  if ((ret = malloc(sizeof(*ret))) == NULL)
    return (NULL);
  e = list->first;
  i = 0;
  while (e)
    {
      if (i == offset)
	{
	  ret->x = e->x;
	  ret->y = e->y;
	  return (ret);
	}
      i++;
      e = e->next;
    }
  return (NULL);
}

int		link_fdf2(t_list *list, t_vect c, t_image *img)
{
  int		x;
  int		y;
  t_vect	*a;
  t_vect	*b;

  x = 0;
  y = 0;
  while (x <= c.x)
    {
      while (y + c.x <= c.x * c.y - (c.x + 5))
	{
	  a = get_elem_by_offset(list, x + y);
	  b = get_elem_by_offset(list, x + (y + c.x));
	  draw_lines_to_image(img, *a, *b, DEFAULT_COLOR);
	  y += c.x;
	}
      y = 0;
      x++;
    }
  return (0);
}

void		link_fdf(t_list *list, t_vect c, t_image *img)
{
  t_elem	*e;
  t_vect	a;
  t_vect	b;
  int		i;

  e = list->first;
  i = 1;
  a = a;
  b = b;
  while (e->next)
    {
      if (i != c.x)
	{
	  a.x = e->x;
	  a.y = e->y;
	  b.x = (e->next)->x;
	  b.y = (e->next)->y;
	  draw_lines_to_image(img, a, b, DEFAULT_COLOR);
	}
      else
	i = 0;
      i++;
      e = e->next;
    }
  link_fdf2(list, c, img);
}

void		draw_fdf(t_list *list, t_vect c, t_image *img)
{
  t_vect	cur;
  t_elem	*e;

  e = list->first;
  while (e)
    {
      cur.x = 450 + CNT3 * ((CNT1 * e->x) - (CNT2 * e->y)) + 35;
      cur.y = 450 + CNT3 * (((CNT1 / 2) * e->x)
			    + ((CNT2 / 2) * e->y)) - (e->z * 3);
      e->x = cur.x;
      e->y = cur.y;
      e->z = cur.z;
      my_pixel_put_to_image(img, DEFAULT_COLOR, cur);
      e = e->next;
    }
  link_fdf(list, c, img);
}
