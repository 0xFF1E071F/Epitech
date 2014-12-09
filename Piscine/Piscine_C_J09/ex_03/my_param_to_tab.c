/*
** my_param_to_tab.c for my_param_to_tab in /home/dupard_e/rendu/Piscine_C_J09/ex_02
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct  9 10:31:14 2014 Erwan Dupard
** Last update Fri Oct 10 19:51:36 2014 Erwan Dupard
*/

#include <stdlib.h>

int             *get_len_words(int ac, char **av);
char		**my_str_to_wordtab(char *str);
char		*my_strdup(char *str);

struct		s_stock_par
{
  int		size_param;
  char		*str;
  char		*copy;
  char		**tab;
};

struct s_stock_par		*my_param_to_tab(int ac, char **av)
{
  struct s_stock_par		*s;
  int				i;
  int				j;

  j = 0;
  i = 0;
  s = malloc((ac + 1) * sizeof(*s));
  while (i != ac)
    {
      s[i].str = av[i];
      s[i].copy = my_strdup(s[i].str);
      s[i].tab = my_str_to_wordtab(av[i]);
      s[i].size_param = my_strlen(av[i]);
      i++;
    }
  s[i].str = NULL;
  return (s);
}

int		my_show_wordtab(char **tab)
{
  int		i;

  i = 0;
  while (tab[i])
    {
      my_putstr(tab[i]);
      if (my_is_alphanum(tab[i][0]))
	my_putchar('\n');
      i++;
    }
  return (0);
}
