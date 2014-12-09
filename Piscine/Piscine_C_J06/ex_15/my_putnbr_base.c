/*
** my_putnbr_base.c for my_putnbr_base in /home/dupard_e/rendu/Piscine_C_J06
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Oct  7 18:24:46 2014 Erwan Dupard
** Last update Tue Oct  7 18:24:47 2014 Erwan Dupard
*/

int		my_putnbr_base(int nbr, char *base)
{
  int		base_n;

  if (nbr < 0)
    {
      nbr = -nbr;
      my_putchar('-');
    }
  base_n = my_strlen(base);
  if (nbr <= 1 || nbr >= 2147483647)
    return (0);
  if (nbr <= base_n)
    my_putchar(base[nbr]);
  else if (nbr > base_n)
    {
      my_putnbr_base(nbr / (base_n + 1), base);
      my_putchar(base[nbr % base_n]);
    }
  return (0);
}
