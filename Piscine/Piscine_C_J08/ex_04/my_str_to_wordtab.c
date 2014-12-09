/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/dupard_e/rendu/Piscine_C_J08/ex_04
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Oct  8 11:36:22 2014 Erwan Dupard
** Last update Thu Oct  9 15:24:00 2014 Erwan Dupard
*/

#include <stdlib.h>

char		*my_strdup(char *str);
char		**my_filling(char **word_tab, char *str);

int		my_is_alphanum(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  if (c >= 'A' && c <= 'Z')
    return (1);
  if (c >= '0' && c <= '9')
    return (1);
  return (0);
}

int		count_words(char *str)
{
  int		words;

  words = 0;
  while (*str)
    {
      if (my_is_alphanum(*str))
	{
	  words++;
	  while (my_is_alphanum(*str))
	    str++;
	}
	str++;
    }
  return (words);
}

int		*get_tab_len(char *str)
{
  int		*tab_len;
  int		len;
  int		j;

  len = 0;
  tab_len = malloc(count_words(str) * sizeof(*tab_len));
  j = 0;
  while (*str != 0)
    {
      while (my_is_alphanum(*str))
	{
	  len++;
	  str++;
	}
      if (len > 0)
	{
	  tab_len[j] = len;
	  len = 0;
	  j++;
	}
      str++;
    }
  tab_len[j] = '\0';
  return (tab_len);
}

char		**my_str_to_wordtab(char *str)
{
  int		words;
  int		*tab_len;
  int		i;
  int		j;
  char		**word_tab;

  i = 0;
  j = 0;
  words = count_words(str);
  tab_len = get_tab_len(str);
  word_tab = malloc((words + 1) * sizeof (*word_tab));
  while (i != words)
    {
      word_tab[i] = malloc(tab_len[i]);
      ++i;
    }
  i = 0;
  word_tab = my_filling(word_tab, str);
  return (word_tab);
}

char		**my_filling(char **word_tab, char *str)
{
  int		j;
  int		c;

  c = 0;
  j = 0;
  while (*str)
    {
      while (my_is_alphanum(*str))
	{
	  word_tab[j][c] = *str;
	  c++;
	  str++;
	}
      if (c != 0)
	{
	  word_tab[j][c] = 0;
	  c = 0;
	  j++;
	}
      str++;
    }
  return (word_tab);
}
