/*
** other.c for get_next_line in /home/dupard_e/rendus/CPE_2014_Pushswap/lib/my/get_next_line
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Nov 24 14:20:10 2014 Erwan Dupard
** Last update Mon Nov 24 14:31:50 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "../my.h"
#include "./get_next_line.h"

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

int		isbackn(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (str[i] == '\n')
	return (i);
      i++;
    }
  return (-1);
}
