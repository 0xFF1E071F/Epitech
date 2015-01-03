/*
** args.c for marvin in /home/dupard_e/rendus/rush/marvin
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Sat Jan  3 11:11:04 2015 Erwan Dupard
** Last update Sat Jan  3 14:33:45 2015 Erwan Dupard
*/

#include <stdlib.h>
#include "./include/my.h"
#include "./ressources.h"

int		is_alphanum(char c)
{
  return ((c >= 'a' && c <= 'z') &&
	  (c >= 'A' && c <= 'Z') &&
	  (c >= '0' && c <= '9'));
}

int		tab_len(char **tab)
{
  int		len;

  len = -1;
  while (tab[++len]);
  return (len);
}

char		**get_args_types(char *str)
{
  char		**tab;
  char		**types;
  int		j;
  int		i;

  j = 0;
  while (*(str++) != '(');
  if ((tab = my_str_to_word_tab(str)) == NULL)
    return (NULL);
  if ((types = malloc((tab_len(tab) / 2) + 1)) == NULL)
    return (NULL);
  i = -1;
  while (tab[++i])
    {
      if (!(i % 2))
	{
	  types[j] = tab[i];
	  j++;
	}
    }
  return (types);
}
