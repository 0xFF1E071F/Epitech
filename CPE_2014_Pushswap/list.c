/*
** list.c for pushswap in /home/dupard_e/rendus/CPE_2014_Pushswap
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Nov 27 15:01:18 2014 Erwan Dupard
** Last update Tue Dec  9 16:00:14 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "./list.h"
#include "./include/my.h"

void		my_show_list(t_list **list)
{
  t_list	*e;

  e = *list;
  my_printf("\n");
  while (e)
    {
      my_printf("%d ", e->nb);
      e = e->nxt;
    }
  my_printf("\n");
}

int		is_unsorted_list(t_list **begin)
{
  t_list	*e;

  e = *begin;
  while (e->nxt)
    {
      if (e->nb < (e->nxt)->nb)
	return (0);
      e = e->nxt;
    }
  return (1);
}

int		is_sorted_list(t_list **begin)
{
  t_list	*e;

  e = *begin;
  if (e == NULL)
    return (0);
  while (e->nxt)
    {
      if (e->nb > (e->nxt)->nb)
	return (0);
      e = e->nxt;
    }
  return (1);
}

t_list		*get_last_elem(t_list **begin)
{
  t_list	*e;

  e = *begin;
  if (e == NULL)
    return (NULL);
  while (e->nxt)
    e = e->nxt;
  return (e);
}

t_list		*delete_elem_by_value(t_list **begin, int value)
{
  t_list	*tmp;
  t_list	*e;

  tmp = *begin;
  if (tmp == NULL)
    return (NULL);
  if (tmp->nb == value)
    {
      e = tmp->nxt;
      free(tmp);
      e = delete_elem_by_value(&e, value);
      return (e);
    }
  else
    {
      tmp->nxt = delete_elem_by_value(&(tmp->nxt), value);
      return (tmp);
    }
}
