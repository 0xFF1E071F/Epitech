/*
** my_free_word_tab.c for libmy in /home/dupard_e/rendus/PSU_2014_minishell1/lib/my
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Dec 30 19:47:22 2014 Erwan Dupard
** Last update Tue Dec 30 19:48:41 2014 Erwan Dupard
*/

#include <stdlib.h>

void		my_free_word_tab(char ***word_tab)
{
  char		**tab;
  int		i;

  i = 0;
  tab = *word_tab;
  while (tab[++i])
    free(tab[i]);
  free(tab);
}
