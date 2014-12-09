/*
** my_factorielle_it.c for my_factorielle_it in /home/dupard_e/rendu/Piscine_C_J05
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Oct  3 08:57:09 2014 Erwan Dupard
** Last update Mon Oct  6 17:20:22 2014 Erwan Dupard
*/

int		my_factorielle_it(int nb)
{
  int		f;
  int		n;

  f = 1;
  n = 1;
  if (nb < 0)
    return (1);
  if (nb == 0)
    return (1);
  if (nb > 12)
    return (0);
  while (n <= nb)
    {
      f = f * n++;
    }
  return (f);
}
