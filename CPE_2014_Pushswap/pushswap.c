/*
** pushswap.c for pushswap in /home/dupard_e/rendus/CPE_2014_Pushswap
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec  8 18:37:41 2014 Erwan Dupard
** Last update Tue Dec  9 19:05:31 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "./pushswap.h"
#include "./operations.h"
#include "./list.h"
#include "./include/my.h"

int		try_to_sort_list(t_list **l_a, t_list **l_b)
{
  t_list	*last_e;

  if ((*l_a)->nxt)
    if ((*l_a)->nb > ((*l_a)->nxt)->nb)
      sa(l_a);
  if (is_sorted_list(l_a) && !*l_b)
    return (1);
  last_e = get_last_elem(l_a);
  if (last_e->nb < (*l_a)->nb)
    rra(l_a);
  if (is_sorted_list(l_a) && !*l_b)
    return (1);
  if (*l_a)
    pb(l_a, l_b);
  if (*l_a == NULL)
    while (*l_b)
      pa(l_a, l_b);
  return (0);
}
