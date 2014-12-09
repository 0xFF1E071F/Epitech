/*
** sort_int_tab.c for sort_int_tab in /home/dupard_e/rendus/my_funcs/lib/my
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec  8 13:39:32 2014 Erwan Dupard
** Last update Mon Dec  8 13:46:01 2014 Erwan Dupard
*/

#include "./my.h"

void		swap_int(int *a, int *b)
{
  int		c;

  c = *a;
  *a = *b;
  *b = c;
}

int		is_sorted_tab(int *tab, int len)
{
  int		i;

  i = 0;
  while (i != len - 1)
    {
      if (tab[i] > tab[i + 1])
	return (0);
      i++;
    }
  return (1);
}

void		sort_int_tab(int **tab, int len)
{
  int		*my_tab;
  int		i;

  my_tab = *tab;
  i = 0;
  while (!is_sorted_tab(my_tab, len))
    {
      while (i <= len - 1)
	{
	  if (my_tab[i] > my_tab[i + 1])
	    swap_int(&my_tab[i], &my_tab[i + 1]);
	  i++;
	}
      i = 0;
    }
}
