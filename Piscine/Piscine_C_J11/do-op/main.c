/*
** main.c for do-op in /home/dupard_e/rendus/Piscine_C_J11/do-op
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Oct 20 11:41:35 2014 Erwan Dupard
** Last update Sun Nov 16 15:17:09 2014 Erwan Dupard
*/

#include "t_opp.h"

int		my_getnbr(char *str);
int		my_add(int nb1, int nb2);
int		my_sub(int nb1, int nb2);
int		my_div(int nb1, int nb2);
int		my_mul(int nb1, int nb2);
int		my_mod(int nb1, int nb2);
int		my_usage(int nb1, int nb2);
int		is_op(char c);
int		my_putchar(char c);
int		my_put_nbr(int nbr);
int		my_putstr(char *str);

int		is_err(int i, char **argv)
{
  if (i > 4 && !is_op(argv[2][0]))
    my_putchar('0');
  my_putchar('\n');
  return (0);
}

int		aff_res(char **argv, t_opp gl_opptab[])
{
  int		nb1;
  int		nb2;
  int		i;

  i = 0;
  nb1 = my_getnbr(argv[1]);
  nb2 = my_getnbr(argv[3]);
  while (i != 5)
    {
      if (argv[2][0] == gl_opptab[i].op[0])
	{
	  if (nb2 == 0 && (argv[2][0] == '%' || argv[2][0] == '/'))
	    gl_opptab[i].func(nb1, nb2);
	  else
	    my_put_nbr(gl_opptab[i].func(nb1, nb2));
	}
      i++;
    }
  return (i);
}

int		main(int argc, char **argv)
{
  int		i;
  static t_opp	gl_opptab[] = {{"+", &my_add},
			       {"-", &my_sub},
			       {"/", &my_div},
			       {"*", &my_mul},
			       {"%", &my_mod},
			       {"", &my_usage}};
  if (argc < 4)
    return (0);
  i = aff_res(argv, gl_opptab);
  is_err(i, argv);
  return (0);
}

int		is_op(char c)
{
  if (c == '+' ||
      c == '-' ||
      c == '/' ||
      c == '*' ||
      c == '%')
    return (1);
  return (0);
}

int		my_usage(int nb1, int nb2)
{
  nb1 = nb1;
  nb2 = nb2;
  my_putstr("0\n");
  return (0);
}
