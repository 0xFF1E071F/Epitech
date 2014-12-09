/*
** my_gettab.c for fdf in /home/dupard_e/rendus/MUL_2014_fdf
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Nov  7 15:08:04 2014 Erwan Dupard
** Last update Thu Dec  4 19:10:22 2014 Erwan Dupard
*/

#include <unistd.h>
#include <stdlib.h>
#include "./my_gettab.h"
#include "./include/my.h"

int		add_coord(t_vect v, t_list *list)
{
  t_elem	*e;

  if ((e = malloc(sizeof(*e))) == NULL)
    return (1);
  e->x = v.x;
  e->y = v.y;
  e->z = v.z;
  e->next = list->first;
  list->first = e;
  return (0);
}

void		init_list(t_list *list)
{
  list->x = 0;
  list->y = 0;
  list->z = 0;
  list->first = NULL;
}

t_list		read_tab(int fd, t_list list, t_vect *c)
{
  char		*line;
  t_vect	v;

  v.x = 0;
  v.y = 0;
  init_list(&list);
  while ((line = get_next_line(fd)))
    {
      while (*line)
	{
	  while (*line == ' ' && *line != '\0')
	    line++;
	  v.z = my_getnbr(line);
	  add_coord(v, &list);
	  v.x++;
	  while (IS_NUMBER(*line))
	    line++;
	}
      v.y++;
      c->x = v.x;
      v.x = 0;
    }
  c->y = v.y;
  return (list);
}
