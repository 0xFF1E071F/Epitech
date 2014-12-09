/*
** my_strdup.c for libmy in /home/dupard_e/rendus/PSU_2014_my_ls/lib/my
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov 18 14:45:21 2014 Erwan Dupard
** Last update Tue Nov 18 14:51:02 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "./my.h"

char		*my_strdup(char *str)
{
  char		*ret;
  int		i;

  i = 0;
  ret = malloc(my_strlen(str) * sizeof(char) + 1);
  if (ret == NULL)
    return (NULL);
  while (str[i])
    {
      ret[i] = str[i];
      i++;
    }
  ret[i] = 0;
  return (ret);
}
