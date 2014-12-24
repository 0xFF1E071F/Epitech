/*
** my_getenv.c for my_getenv in /home/dupard_e/rendus/PSU_2014_my_select/lib/my
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 22 14:19:58 2014 Erwan Dupard
** Last update Mon Dec 22 14:31:55 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "./my.h"

char		*my_getenv(char *str)
{
  extern char	**environ;
  int		i;
  int		len;

  len = my_strlen(str);
  i = 0;
  while (environ[i++])
    {
      if (my_strncmp(str, environ[i], len) == 0)
	return (environ[i] + len + 1);
    }
  return (NULL);
}
