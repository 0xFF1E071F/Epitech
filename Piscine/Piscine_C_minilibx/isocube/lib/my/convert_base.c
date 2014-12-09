/*
** convert_base.c for convert_base in /home/dupard_e/rendu/Piscine_C_J08/ex_02
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Oct  8 10:10:15 2014 Erwan Dupard
** Last update Mon Oct 27 15:50:49 2014 Erwan Dupard
*/

#include <stdlib.h>

int		my_strlen(char *str);
int		my_getnbr_base(char *base_from, char *nbr);

char		*convert_base(char *nbr, char *base_from, char *base_to)
{
  int		n;
  char		*nbr2;
  int		base_n;
  int		i;

  i = 0;
  base_n = my_strlen(base_to);
  if (*nbr == 0 || *base_from == 0 || *base_to == 0)
    return (0);
  n = my_getnbr_base(nbr, base_from);
  nbr2 = malloc(my_strlen(nbr) * sizeof (*nbr));
  while (n != 0)
    {
      n = n / base_n;
      nbr2[i] = base_to[n % base_n];
	i++;
    }
  return (nbr2);
}
