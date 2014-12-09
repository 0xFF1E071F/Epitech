/*
** isocube.c for isocube in /home/dupard_e/rendus/Piscine_C_minilibx/isocube
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov 11 15:14:45 2014 Erwan Dupard
** Last update Tue Nov 11 18:27:12 2014 Erwan Dupard
*/

#include "./my_vectors.h"
#include "./include/my.h"
#include "./isocube.h"

void            isocube(t_vect pos, t_cube c, t_infos s)
{
  t_vect	next;
  
  next.x = pos.x;
  next.y = pos.y + c.L;

  my_printf("cube(%d, %d) : (%d, %d, %d)\n", pos.x, pos.y, c.l, c.L, c.z);
  my_printf("line({%d, %d}, {%d, %d})\n", pos.x, pos.y, next.x, next.y);
  draw_lines(s, pos, next, DEFAULT_COLOR);

  pos.x = next.x;
  pos.y = next.y;
  next.x = (CNT1 * (pos.x + c.l));
  next.y = (pos.y) - (c.L * CNT2);
  draw_lines(s, pos, next, DEFAULT_COLOR);

  pos.x = next.x;
  pos.y = next.y;
  next.y = pos.y - c.L;
  next.x = pos.x;
  draw_lines(s, pos, next, DEFAULT_COLOR);

  pos.x = next.x;
  pos.y = next.y;
  next.x = ((CNT1) / (pos.x + c.l));
  next.y = (pos.y) - (c.L * CNT2);
  draw_lines(s, pos, next, DEFAULT_COLOR);
}
