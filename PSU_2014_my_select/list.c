/*
** list.c for my_select in /home/dupard_e/rendus/PSU_2014_my_select
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Dec 16 11:13:48 2014 Erwan Dupard
** Last update Wed Jan  7 23:22:36 2015 Erwan Dupard
*/

#include <stdlib.h>
#include "./include/my.h"
#include "./list.h"
#include "./term.h"

int		get_e(char *name, t_list **list, t_list *e)
{
  e->nxt = e;
  e->prv = e;
  if ((e->name = my_strdup(name)) == NULL)
    return (1);
  e->selected = 0;
  e->on = 1;
  *list = e;
  (*list)->prv = (*list)->nxt;
  return (0);
}

int		add_elem_to_list(char *name, t_list **list)
{
  t_list	*e;
  t_list	*tmp;
  if ((e = malloc(sizeof(*e))) == NULL)
    return (1);
  if (*list == NULL)
    {
      if (get_e(name, list, e))
	return (1);
      return (0);
    }
  tmp = *list;
  tmp = tmp->nxt;
  while (tmp->nxt != *list)
    tmp = tmp->nxt;
  tmp->nxt = e;
  e->prv = tmp;
  e->nxt = *list;
  e->on = 0;
  e->selected = 0;
  if ((e->name = my_strdup(name)) == NULL)
    return (1);
  (*list)->prv = e;
  return (0);
}

int		my_params_to_list(t_list **list, int argc, char **argv)
{
  int		i;

  i = 1;
  while (i <= (argc - 1))
    {
      if ((add_elem_to_list(argv[i], list)))
	return (1);
      i++;
    }
  return (0);
}

void		my_show_list(t_list **list, int tty)
{
  t_list	*tmp;

  tmp = *list;
  if (tmp->on && !tmp->selected)
    my_underline(tmp->name, tty);
  else if (tmp->selected)
    my_selected(tmp->name, tty);
  else
    my_fprintf(tty, "%s\n", tmp->name);
  tmp = tmp->nxt;
  while (tmp != *list)
    {
      if (tmp->on && !tmp->selected)
	my_underline(tmp->name, tty);
      else if (tmp->selected)
	my_selected(tmp->name, tty);
      else
	my_fprintf(tty, "%s\n", tmp->name);
      tmp = tmp->nxt;
    }
}

void		print_result(t_list **list)
{
  t_list	*tmp;

  tmp = *list;
  if (tmp->selected)
    my_printf("%s ", tmp->name);
  tmp = tmp->nxt;
  while (tmp != *list)
    {
      if (tmp->selected)
	my_printf("%s ", tmp->name);
      tmp = tmp->nxt;
    }
  my_printf("\n");
}
