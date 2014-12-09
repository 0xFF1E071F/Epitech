/*
** ops.c for do-op in /home/dupard_e/rendus/Piscine_C_J11/do-op
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Oct 20 11:29:54 2014 Erwan Dupard
** Last update Mon Oct 20 17:21:22 2014 Erwan Dupard
*/

int		my_putstr(char *str);

int		my_add(int nb1, int nb2)
{
  return (nb1 + nb2);
}

int		my_sub(int nb1, int nb2)
{
  return (nb1 - nb2);
}

int		my_mul(int nb1, int nb2)
{
  return (nb1 * nb2);
}

int		my_div(int nb1, int nb2)
{
  if (nb2 == 0)
    {
      my_putstr("Stop : division by zero");
      return (0);
    }
  return (nb1 / nb2);
}

int		my_mod(int nb1, int nb2)
{
  if (nb2 == 0)
    {
      my_putstr("Stop : modulo by zero");
      return (0);
    }
  return (nb1 % nb2);
}
