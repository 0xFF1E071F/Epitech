/*
** main.c for tri1 in /home/dupard_e/rendus/tri/test1
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov 25 18:00:38 2014 Erwan Dupard
** Last update Tue Nov 25 18:36:41 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "./list.h"
#include "./include/my.h"

void		my_rev_list(t_list *list)
{
  t_elem	*e;
  
}

void		add_nb(t_list *list, int nb)
{
  t_elem	*e;
  
  e = malloc(sizeof(*e));
  e->nb = nb;
  e->next = list->first;
  list->first = e;
}

void		init_list(t_list *list)
{
  list->nb = 0;
  list->first = NULL;
}

void		print_list(t_list *list)
{
  t_elem	*e;

  e = list->first;
  while (e)
    {
      my_printf("%d ", e->nb);
      e = e->next;
    }
  my_printf("\n");
}

int		main(int argc, char **argv)
{
  int		i;
  t_list	list;

  if (argc < 2)
    return (0);
  i = 1;
  init_list(&list);
  while (i <= argc - 1)
    {
      add_nb(&list, my_getnbr(argv[i]));
      i++;
    }
  print_list(&list);
  return (0);
}
