/*
** my_rev_list.c for my_rev_list in /home/dupard_e/rendus/Piscine/Piscine_C_J12/ex_03
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Nov 26 14:32:56 2014 Erwan Dupard
** Last update Wed Nov 26 15:02:22 2014 Erwan Dupard
*/

#include "./list.h"

int		my_rev_list(t_list **begin)
{
  t_list	*cur;
  t_list	*tmp;

  cur = *list;
  tmp = cur;
  while (cur)
    {
      tmp = cur;
      cur = cur->next;
      cur->next = tmp;
      tmp->next = cur->next;
    }
  return (1);
}

void		print_list(t_list **begin)
{
  t_list	*e;

  e->
}

int		main()
{
  t_list	list;

  init_list(&list);
  
}
