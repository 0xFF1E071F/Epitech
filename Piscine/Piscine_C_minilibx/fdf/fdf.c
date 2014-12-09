/*
** fdf.c for fdf in /home/dupard_e/rendus/Piscine_C_minilibx/fdf
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Oct 31 18:48:29 2014 Erwan Dupard
** Last update Fri Oct 31 19:18:02 2014 Erwan Dupard
*/

#include "fdf.h"
#include <stdlib.h>

int		**get_fdptab(char *buff)
{
  int		**tab;
  int		i;
  int		j;
  int		tmp;

  i = 0;
  j = 0;
  if(alloc_my_tab(&tab) == 1)
    {
      my_putstr("Error With Malloc...\n");
      return (NULL);
    }
  while (*buff)
    {
      tmp = my_getnbr(buff);
      tab[j][i] = tmp;
      i++;
      while (*buff >= '0' && *buff <= '9')
	buff++;
      if (*buff == '\n')
	j++;
      buff++;
    }
}

void		show_int_table(int **tab)
{
  int		i;
  int		j;

  while ()
}

int		alloc_my_tab(int **tab)
{
 int		**tab;
  int		i;
  int		j;
  int		x;
  int		y;

  x = get_x(buff);
  y = get_y(buff);
  i = 0;
  j = 0;
  if((tab = malloc(sizeof(int) * y)) == NULL)
    return (1);
  while (j != y)
    {
      if((tab[j] = malloc(sizeof(int) * x)) == NULL)
	return (1);
      j++;
    }
  tab[j] = -1;
  return (0);
}

int		get_x(char *buff)
{
  int		x;
  
  x = 0;
  while (*buff != '\n')
    {
      buff++;
      x++;
    }
  return (x);
}

int		get_y(char *buff)
{
  int		y;

  y = 0;
  while (*buff)
    {
      if (*buff == '\n')
	y++;
      buff++;
    }
  return (y);
}
