/*
** get_list.c for pushswap in /home/dupard_e/rendus/CPE_2014_Pushswap
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Nov 27 12:36:15 2014 Erwan Dupard
** Last update Thu Nov 27 18:22:49 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "./list.h"
#include "./include/my.h"




void		print_list(t_list **begin)
{
  t_list	*tmp;

  tmp = *begin;
  while (tmp)
    {
      my_printf("%d ", tmp->nb);
      tmp = tmp->nxt;
    }
  my_printf("\n");
}

int		add_elem(t_list **begin, int nb)
{
  t_list	*tmp;

  if ((tmp = malloc(sizeof(*tmp))) == NULL)
    return (1);
  tmp->nb = nb;
  tmp->nxt = *begin;
  *begin = tmp;
  return (0);
}

int		get_list(t_list **begin, int argc, char **argv)
{
  int		i;

  i = argc - 1;
  while (i >= 1)
    {
      add_elem(begin, my_getnbr(argv[i]));
      i--;
    }
  return (0);
}
