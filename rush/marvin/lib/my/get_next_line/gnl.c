/*
** gnl.c for get_next_line in /home/dupard_e/rendus/MUL_2014_fdf/lib/my/get_next_line
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Dec  5 14:27:22 2014 Erwan Dupard
** Last update Fri Dec  5 14:32:21 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "./get_next_line.h"

int		init_gnl(int *i, char **tmp, char save[])
{
  *i = -1;
  if ((*tmp = malloc(sizeof(**tmp) * BUFF_SIZE + 1)) == NULL)
    return (-1);
  save[0] = 0;
  return (0);
}

char            *my_realloc(char *buf, int size)
{
  char		*ret;
  int		 i;
  int		len;

  len = -1;
  i = 0;
  while (buf[++len]);
  if ((ret = malloc(len * sizeof(*buf) + size + 1)) == NULL)
    return (NULL);
  while (buf[i])
    {
      ret[i] = buf[i];
      i++;
    }
  ret[i] = 0;
  return (ret);
}
