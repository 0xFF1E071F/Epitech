/*
** main.c for bistro in /home/dupard_e/rendus/Bistromathique
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Sat Nov  1 23:08:28 2014 Erwan Dupard
** Last update Mon Nov  3 12:01:54 2014 Erwan Dupard
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "bistromathique.h"


void		my_putstr(char *);
int		my_strlen(char *);
int		my_atoi(char *);
static void	check_base(char *base);
static void	check_ops(char *ops);
static char	*get_expr(unsigned size);
int		is_syntaxed(char *expr, char *base, char *ops);
void		my_putstr_err(char *str);

int		main(int ac, char **av)
{
  char		*expr;
  unsigned int	size;

  if (ac != 4)
    {
      my_putstr("Usage : ");
      my_putstr(av[0]);
      my_putstr(" base ops\"()+-*/%\" exp_len\n");
      exit(1);
    }
  check_base(av[1]);
  check_ops(av[2]);
  size = my_atoi(av[3]);
  expr = get_expr(size);
  if (is_syntaxed(expr, av[1], av[2]) == 0)
    {
      my_putstr_err("Syntaxe error\n");
      return (1);
    }
  my_putstr(eval_expr(av[1], av[2], expr, size));
  return (0);
}

static void	check_base(char *b)
{
 if (my_strlen(b) < 2)
    {
      my_putstr("Bad base\n");
      exit(1);
    }
}

static char	*get_expr(unsigned int size)
{
  char	*expr;
  
  if (size <= 0)
    {
      my_putstr("Bad expr len\n");
      exit(2);
    }
  expr = malloc(size + 1);
  if (expr == 0)
    {
      my_putstr("could not alloc\n");
      exit(3);
    }
  if (read(0, expr, size) != size)
    {
      my_putstr("could not read\n");
      exit(4);
    }
  expr[size] = 0;
  return (expr);
}

static void	check_ops(char *ops)
{
  if (my_strlen(ops) != 7)
    {
      my_putstr("Bad ops\n");
      exit(5);
    }
}
