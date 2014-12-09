/*
** test.c for syntax in /home/dupard_e/rendus/Bistromathique/test
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct 30 12:28:59 2014 Erwan Dupard
** Last update Mon Nov  3 11:06:39 2014 Erwan Dupard
*/

#include <stdlib.h>

int		is_op_and_base(char *expr, char *base, char *ops);
void		my_putstr_err(char *str);
void		my_putchar(char c);

int		is_number(char c)
{
  return ((c >= '0' && c <= '9'));
}

int		is_para(char c)
{
  return (c == '(' || c == ')');
}

int		is_syntaxed(char *expr, char *base, char *ops)
{
  if (!is_op_and_base(expr, base, ops))
    return (0);
  while (*expr)
    {
      if (is_number(*expr) && is_para(*(expr + 1)))
	return (0);
      if ((*expr == '/' || *expr == '%') && *(expr + 1) == '0')
	{
	  my_putstr_err("Error : division by zero\n");
	  my_putchar('A');
	  return (2);
	}
      expr++;
    }
  return (1);
}

int		is_op_and_base(char *expr, char *base, char *ops)
{
  int		ok;
  int		i;

  ok = 0;
  while (*expr)
    {
      i = 0;
      while (base[i])
	{
	  (*expr == base[i]) ? ok = 1 : 0;
	  i++;
	}
      i = 0;
      while (ops[i])
	{
	  (*expr == ops[i]) ? ok = 1 : 0;
	  i++;
	}
      if (ok == 0)
	return (0);
      ok = 0;
      expr++;
    }
  return (1);
}
