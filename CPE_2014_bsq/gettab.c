/*
** gettab.c for bsq in /home/dupard_e/rendus/CPE_2014_bsq
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 15 10:27:30 2014 Erwan Dupard
** Last update Wed Dec 17 01:11:23 2014 Erwan Dupard
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "./include/my.h"

void		my_show_tab(char **t)
{
  int		x;
  int		y;

  x = 0;
  y = 0;
  while (t[y])
    {
      while (t[y][x])
	{
	  my_printf("%c", t[y][x]);
	  x++;
	}
      my_printf("\n");
      x = 0;
      y++;
    }
}

int		get_y(int fd)
{
  char		*s;
  int		y;

  s = get_next_line(fd);
  y = my_getnbr(s);
  return (y);
}

char		**my_gettab(int fd, int *y)
{
  char		**g;
  int		i;

  i = 0;
  *y = get_y(fd);
  if ((g = malloc(*y * sizeof(*g) + 2)) == NULL)
    return (NULL);
  while ((g[i] = get_next_line(fd)))
    i++;
  g[i] = NULL;
  return (g);
}
