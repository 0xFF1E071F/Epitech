/*
** my_power_it.c for my_power_it in /home/dupard_e/rendu/Piscine_C_J05
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Oct  3 14:47:36 2014 Erwan Dupard
** Last update Mon Oct  6 17:24:07 2014 Erwan Dupard
*/

int		my_power_it(int nb, int power)
{
  int		i;
  int		res;

  i = 0;
  res = 1;
  while (i != power)
    {
      res = res * nb;
      if (res >= 2147483647 || res <= -2147483647)
	return (0)
      i++;
    }
  return (res);
}
