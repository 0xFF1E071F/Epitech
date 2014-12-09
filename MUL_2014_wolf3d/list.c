/*
** list.c for wolf3d in /home/dupard_e/rendus/MUL_2014_wolf3d
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Dec  9 12:18:12 2014 Erwan Dupard
** Last update Tue Dec  9 12:39:37 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "./maze.h"
#include "./include/my.h"

void		my_show_int_tab(t_maze *maze)
{
  int		x;
  int		y;

  x = 0;
  y = 0;
  while (y <= maze->y)
    {
      while (x <= maze->x)
	{
	  my_printf("%d", maze->map[y][x]);
	  x++;
	}
      my_printf("\n");
      x = 0;
      y++;
    }
}

int		**list_to_int_tab(t_maze *maze)
{
  int		**int_maze;
  t_list	*e;
  int		y;
  int		x;

  x = 1;
  y = 0;
  if ((int_maze = malloc(sizeof(*int_maze) * maze->y)) == NULL)
    return (NULL);
  e = maze->maze;
  while (e)
    {
      if ((int_maze[y] = malloc(sizeof(**int_maze) * maze->x)) == NULL)
	return (NULL);
      int_maze[y][x] = e->z;
      if (x > maze->x)
	{
	  y++;
	  x = 1;
	}
      x++;
      e = e->nxt;
    }
  return (int_maze);
}
