/*
** gettab.c for bsq in /home/dupard_e/rendus/CPE_2014_bsq
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 15 10:27:30 2014 Erwan Dupard
** Last update Wed Dec 24 13:31:26 2014 Erwan Dupard
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
	  if (t[y][x] == 'o')
	    my_printf("\033[31m%c\033[0m", 'o');
	  else if (t[y][x] == 'x')
	    my_printf("\033[32m\033[1m\033[1m%c\033[0m", 'x');
	  else
	    my_printf("\033[36m\033[1m%c\033[0m", t[y][x]);
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
  if (y <= 0)
    {
      my_fprintf(2, "[-] Invalide Tab Size..\n");
      exit(1);
    }
  return (y);
}

char		**my_gettab(int fd, int *y)
{
  char		**g;
  int		i;

  i = 0;
  *y = get_y(fd);
  if ((g = malloc(*y * sizeof(*g) + 1)) == NULL)
    return (NULL);
  while ((g[i] = get_next_line(fd)))
    i++;
  g[i] = NULL;
  if (*y != i)
    {
      my_fprintf(2, "[-] Invalide Tab Size..\n");
      exit(1);
    }
  *y = (i - 1);
  return (g);
}
