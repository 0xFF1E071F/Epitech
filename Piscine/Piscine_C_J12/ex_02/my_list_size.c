/*
** my_list_size.c for my_list_size in /home/dupard_e/rendus/Piscine_C_J12/ex_02
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Oct 21 15:22:42 2014 Erwan Dupard
** Last update Tue Oct 21 15:29:04 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "my_list.h"

int		my_list_size(t_list *begin)
{
  int		c;

  c = 1;
  while (begin->next != NULL)
    {
      begin = begin->next;
      c++;
    }
  return (c);
}
