/*
** my_select.c for my_select in /home/dupard_e/rendus/PSU_2014_my_select
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 22 14:58:22 2014 Erwan Dupard
** Last update Wed Dec 24 14:01:26 2014 Erwan Dupard
*/

#include <unistd.h>
#include "./my_select.h"
#include "./list.h"
#include "./term.h"
#include "./include/my.h"

void		uparrow(t_list **list)
{
  int		ok;
  t_list	*e;

  ok = 0;
  e = *list;
  while (!ok)
    {
      if (e->on == 1)
	{
	  e->on = 0;
	  e->prv->on = 1;
	  ok = 1;
	}
      e = e->nxt;
    }
}

void		downarrow(t_list **list)
{
  int		ok;
  t_list	*e;

  ok = 0;
  e = *list;
  while (!ok)
    {
      if (e->on == 1)
	{
	  e->on = 0;
	  e->nxt->on = 1;
	  ok = 1;
	}
      e = e->nxt;
    }
}

void		my_space(t_list **list)
{
  t_list	*tmp;
  int		ok;

  ok = 0;
  tmp = *list;
  while (!ok)
    {
      if (tmp->on)
	{
	  tmp->selected = !tmp->selected;
	  ok = 1;
	}
      tmp = tmp->nxt;
    }
}

void		my_select(t_list **list, int tty)
{
  char		buffer[3];
  int		n;
  char		*cm;

  cm = tgetstr("cm", NULL);
  while (buffer[0] != 0x0A)
    {
      my_show_list(list, tty);
      n = read(0, buffer, 3);
      buffer[n] = 0;
      if (buffer[0] == 0x20)
	my_space(list);
      if (buffer[0] == 0x1b && buffer[1] == 0x5b)
	{
	  if (buffer[2] == 0x41)
	    uparrow(list);
	  if (buffer[2] == 0x42)
	    downarrow(list);
	  if (buffer[2] == 0x43)
	    rightarrow(list);
	  if (buffer[2] == 0x44)
	    leftarrow(list);
	}
      my_fprintf(tty, "%s", tgoto(cm, 0, 0));
    }
  clean_screen(tty);
  print_result(list);
}
