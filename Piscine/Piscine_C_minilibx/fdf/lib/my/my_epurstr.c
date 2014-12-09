/*
** my_epurstr.c for my_epurstr in /home/dupard_e/rendus/Bistromathique/lib/my
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Oct 31 12:55:35 2014 Erwan Dupard
** Last update Fri Oct 31 13:09:54 2014 Erwan Dupard
*/

#include <stdlib.h>

int		my_strlen(char *str);
void		my_putchar(char c);

char		*my_epurstr(char *str)
{
  char		*ret;
  char		*save;

  
  if((save = ret = malloc(my_strlen(str) + 1)) == NULL)
    return (NULL);
  while (*str)
    {
      *ret = *str;
      str++;
      ret++;
      while (*str == ' ' || *str == '\t')
	  str++;
    }
  *ret = 0;
  return (save);
}
