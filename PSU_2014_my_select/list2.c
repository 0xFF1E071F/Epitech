/*
** list2.c for my_select in /home/dupard_e/rendus/PSU_2014_my_select
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Jan  7 18:07:06 2015 Erwan Dupard
** Last update Wed Jan  7 18:56:32 2015 Erwan Dupard
*/

#include <stdlib.h>
#include "./list.h"
int		count_elem(t_list **list)
{
  int		i;
  t_list	*tmp;

  tmp = *list;
  i = 1;
  tmp = tmp->nxt;
  while (tmp != *list)
    {
      tmp = tmp->nxt;
      i++;
    }
  return (i);
}

void		update_tmp(t_list *tmp)
{
  (tmp->prv)->nxt = tmp->nxt;
  (tmp->nxt)->prv = tmp->prv;
  tmp->nxt->on = 1;
  free(tmp->name);
  free(tmp);
  tmp = NULL;
}

int		delete_elem_from_list(t_list **list)
{
  t_list	*tmp;

  tmp = *list;
  if (tmp->on)
    {
      *list = tmp->nxt;
      update_tmp(tmp);
      return (1);
    }
  tmp = tmp->nxt;
  while (tmp != *list)
    {
      if (tmp->on)
	{
	  update_tmp(tmp);
	  return (1);
	}
      tmp = tmp->nxt;
    }
  return (0);
}
