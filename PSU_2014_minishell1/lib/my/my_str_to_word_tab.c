/*
** my_str_to_word_tab.c<2> for my_str_to_word_tab in /home/dupard_e/rendus/rush/marvin
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Sat Jan  3 11:50:35 2015 Erwan Dupard
** Last update Sat Jan  3 11:50:36 2015 Erwan Dupard
*/


#include <stdlib.h>
#include "./my.h"

int		get_word_count(char *str)
{
  int		len;

  len = 0;
  while (*str == ' ')
    str++;
  while (*str)
    {
      if (*str != ' ')
	{
	  len++;
	  while (*str != ' ' && *str != 0)
	    str++;
	}
      if (*str == ' ')
	str++;
    }
  return (len);
}

char		*get_some_str(char *str)
{
  char		*ret;
  int		i;

  i = 0;
  while (str[i] != ' ' && str[i] != 0)
    i++;
  if ((ret = malloc(sizeof(*str) * i + 1)) == NULL)
    return (NULL);
  i = 0;
  while (str[i] != ' ' && str[i] != 0)
    {
      ret[i] = str[i];
      i++;
    }
  ret[i] = 0;
  return (ret);
}

char		**my_str_to_word_tab(char *str)
{
  int		len;
  char		**tab;
  int		j;

  j = 0;
  len = get_word_count(str);
  if ((tab = malloc(sizeof(*tab) * len + 1)) == NULL)
    return (NULL);
  while (*str)
    {
      if (*str != ' ')
	{
	  tab[j] = get_some_str(str);
	  j++;
	  while (*str != ' ' && *str != 0)
	    str++;
	}
      if (*str == ' ')
	str++;
    }
  return (tab);
}
