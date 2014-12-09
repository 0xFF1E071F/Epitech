/*
** my_factorielle_rec.c for my_factorielle_rec in /home/dupard_e/rendu/Piscine_C_J05
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Oct  3 14:24:40 2014 Erwan Dupard
** Last update Mon Oct  6 17:25:13 2014 Erwan Dupard
*/

int		my_factorielle_rec(int nb)
{
  int   a;

  a = nb;
  if (a < 0 || a > 12)
    return (0);
  if (nb == 0)
    return (1);
  else if (a == 0)
    return (1);
  else
    return (a * my_factorielle_rec(a - 1));
}
