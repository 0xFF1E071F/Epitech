/*
** my_eval.c for eval_expr in /home/dupard_e/rendus/Piscine_C_eval_expr
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Oct 27 13:18:20 2014 Erwan Dupard
** Last update Mon Oct 27 13:57:15 2014 Erwan Dupard
*/

#include "my_eval.h"

int		*eval_expr(char *str)
{
  int		n;

  if (count_par(str) == 0)
    n = do_it_without_pri(str);
}

int		is_number(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  return (0);
}

int		count_par(char *str)
{
  int		par;

  par = 0;
  while (*str)
    {
      if (*str == '(' || *str == ')')
	par++;
      str++;
    }
  return (par);
}
