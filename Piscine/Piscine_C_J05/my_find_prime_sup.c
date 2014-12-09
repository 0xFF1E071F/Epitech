/*
** my_is_prime.c for my_is_prime in /home/dupard_e/rendu/Piscine_C_J05
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Oct  3 19:38:20 2014 Erwan Dupard
** Last update Mon Oct  6 17:21:02 2014 Erwan Dupard
*/

int		my_is_prime(int nb)
{
  int		i;
  int		c;

  c = 0;
  i = 0;
  while (i != nb)
    {
      if ((nb + 1) / (i + 1))
	{
	  return (nb + 1);
	}
    }
  return (0);
}
