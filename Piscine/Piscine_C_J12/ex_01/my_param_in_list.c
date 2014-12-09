/*
** my_param_in_list.c for my_params_in_list in /home/dupard_e/rendus/Piscine_C_J12/ex_01
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Oct 21 11:20:54 2014 Erwan Dupard
** Last update Tue Oct 21 15:57:29 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "my_list.h"

int		is_ok(t_list *elem, t_list *tmp)
{
  if (tmp == NULL)
    return (0);
  if (elem == NULL)
    return (0);
  return (1);
}

t_list		*my_param_in_list(int ac, char **av)
{
  int		i;
  int		len;
  t_list	*elem;
  t_list	*tmp;

  elem = malloc(sizeof(*elem));
  tmp = malloc(sizeof(*tmp));
  if (is_ok(elem, tmp) == 0)
    return (0);
  i = ac - 1;
  elem->next = NULL;
  elem->av = av[i];
  i--;
  while (i != -1)
    {
      tmp = malloc(sizeof(*tmp));
      if (tmp == NULL)
	return (0);
      tmp->next = elem;
      tmp->av = av[i];
      elem = tmp;
      i--;
    }
  return (elem);
}
