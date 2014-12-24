/*
** carre.c for bsq in /home/dupard_e/rendus/CPE_2014_bsq
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 15 11:38:38 2014 Erwan Dupard
** Last update Thu Dec 18 15:53:15 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "./ressources.h"
#include "./include/my.h"

void		fill_carre(char ***map, t_vect pos, int b, int y)
{
  char		**c;
  t_vect	cur;

  c = *map;
  cur.x = pos.x;
  cur.y = pos.y;
  while (cur.y < pos.y + b && cur.y < y)
    {
      while (cur.x < pos.x + b)
	{
	  c[cur.y][cur.x] = 'x';
	  cur.x++;
	}
      cur.x = pos.x;
      cur.y++;
    }
}

int		check_carre(t_vect pos, char **map, int c, int y)
{
  t_vect	cur;

  cur.x = pos.x;
  cur.y = pos.y;
  if (map == NULL)
    return (0);
  while (cur.y < pos.y + c)
    {
      while (cur.x < pos.x + c)
	{
	  if (map[cur.y][cur.x] == 'o' || map[cur.y][cur.x] == 0)
	    return (0);
	  cur.x++;
	}
      cur.x = pos.x;
      cur.y++;
      if (cur.y > y)
	return (0);
    }
  return (1);
}

