/*
** my_select2.c for my_select in /home/dupard_e/rendus/PSU_2014_my_select
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 22 17:27:44 2014 Erwan Dupard
** Last update Mon Dec 22 17:32:17 2014 Erwan Dupard
*/

#include <unistd.h>
#include "./my_select.h"
#include "./list.h"
#include "./term.h"
#include "./include/my.h"

void		rightarrow(t_list **list)
{
  int		ok;
  t_list	*e;
  int		i;

  i = 0;
  ok = 0;
  e = *list;
  while (!ok)
    {
      if (e->on == 1)
	{
	  e->on = 0;
	  while (i++ <= 5)
	    e = e->nxt;
	  e->on = 1;
	  ok = 1;
	}
      e = e->nxt;
    }
}

void		leftarrow(t_list **list)
{
  int		ok;
  t_list	*e;
  int		i;

  i = 0;
  ok = 0;
  e = *list;
  while (!ok)
    {
      if (e->on == 1)
	{
	  e->on = 0;
	  while (i++ <= 5)
	    e = e->prv;
	  e->on = 1;
	  ok = 1;
	}
      e = e->prv;
    }
}
