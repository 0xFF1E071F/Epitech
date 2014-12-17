/*
** check.c for bsq in /home/dupard_e/rendus/CPE_2014_bsq
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 15 12:56:03 2014 Erwan Dupard
** Last update Wed Dec 17 01:27:56 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "./ressources.h"
#include "./include/my.h"

void		init_vect(t_vect **c)
{
  t_vect	*a;

  a = *c;
  a->x = 0;
  a->y = 0;
}

void		reinitialise_vect(t_vect **c)
{
  t_vect	*a;

  a = *c;
  a->y++;
  a->x = 0;
}

void		zero_vect(t_vect **cur, int *c)
{
  t_vect	*a;

  a = *cur;
  a->x = 0;
  a->y = 0;
  (*c)--;
}

t_vect		*check_bsq(char **map, int *b, int y)
{
  t_vect	*cur;
  int		c;

  if (map[0] == NULL)
    return (NULL);
  if ((cur = malloc(sizeof(*cur))) == NULL)
    return (NULL);
  init_vect(&cur);
  c = my_strlen(map[0]);
  while (c >= 1)
    {
      while (map[cur->y])
	{
	  while (map[cur->y][cur->x])
	    {
	      *b = c;
	      if (check_carre(*cur, map, c, y) == 1)
		return (cur);
	      cur->x++;
	    }
	  reinitialise_vect(&cur);
	}
      zero_vect(&cur, &c);
    }
  return (NULL);
}
