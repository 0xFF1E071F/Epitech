/*
** maze.c for wolf3d in /home/dupard_e/rendus/MUL_2014_wolf3d
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec  8 15:32:29 2014 Erwan Dupard
** Last update Mon Dec  8 16:41:10 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "./my_vectors.h"
#include "./maze.h"
#include "./include/my.h"

void		init_vect(t_vect *p)
{
  p->x = 0;
  p->y = 0;
}

void		init_list(t_list **list)
{
  *list = NULL;
}

void		add_value(t_list **list, int value)
{
  t_list	*e;
  t_list	*tmp;

  e = malloc(sizeof(*e));
  e->z = value;
  e->nxt = NULL;
  if (*list == NULL)
    *list = e;
  else
    {
      tmp = *list;
      while (tmp->nxt)
	tmp = tmp->nxt;
      tmp->nxt = e;
    }
}

void		my_show_list(t_maze *maze)
{
  t_list	*e;
  int		i;

  i = 0;
  e = maze->maze->nxt;
  while (e)
    {
      if (i == maze->x)
	{
	  my_printf("\n");
	  i = 0;
	}
      my_printf("%d", e->z);
      i++;
      e = e->nxt;
    }
  my_printf("\n");
}

t_maze		*get_maze_file(int fd)
{
  t_maze	*maze;
  char		*s;
  t_vect	p;
  int		i;

  i = -1;
  if ((maze = malloc(sizeof(*maze))) == NULL)
    return (NULL);
  init_list(&maze->maze);
  init_vect(&p);
  maze->maze = malloc(4096);
  while ((s = get_next_line(fd)))
    {
      while (s[++i])
	add_value(&maze->maze, s[i] - 48);
      p.x = i;
      p.y++;
      i = -1;
      free(s);
    }
  maze->len = (p.x * p.y);
  maze->x = p.x;
  maze->y = p.y;
  return (maze);
}
