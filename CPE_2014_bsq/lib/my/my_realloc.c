/*
** my_realloc.c for lib in /home/dupard_e/rendus/CPE_2014_bsq/lib/my
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 15 10:30:34 2014 Erwan Dupard
** Last update Mon Dec 15 10:33:13 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "./my.h"

char		*my_realloc(char *str, int size)
{
  char		*ret;
  int		i;

  if ((ret = malloc(my_strlen(str) + size + 1)) == NULL)
    return (NULL);
  i = 0;
  while (str[i])
    {
      ret[i] = str[i];
      ++i;
    }
  ret[i] = 0;
  return (ret);
}
