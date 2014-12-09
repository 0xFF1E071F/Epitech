/*
** my_put_nbr.c for my_put_nbr in /home/dupard_e/oklm
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct  2 19:35:35 2014 Erwan Dupard
** Last update Mon Oct 20 16:02:13 2014 Erwan Dupard
*/

void		my_putchar(char c);
int		my_putstr(char *str);

int		my_put_nbr(int nb)
{
  if (nb <= -2147483647 || nb >= 2147483647)
    return (0);
  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
    }
  if (nb == 0)
    my_putstr("0\b");
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
  else if (nb <= 9)
    my_putchar(nb + 48);
  return (0);
}
