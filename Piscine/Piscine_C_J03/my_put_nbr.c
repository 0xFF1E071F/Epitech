/*
** my_put_nbr.c for my_put_nbr in /home/dupard_e/oklm
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct  2 19:35:35 2014 Erwan Dupard
** Last update Thu Oct  2 21:36:46 2014 Erwan Dupard
*/

int		b()
{
  my_putchar('-');
  my_putchar('2');
  my_putchar('1');
  my_putchar('4');
  my_putchar('7');
  my_putchar('4');
  my_putchar('8');
  my_putchar('3');
  my_putchar('6');
  my_putchar('4');
  my_putchar('8');
}

int		my_put_nbr(int nb)
{
  int		c;
  int		nb2;

  c = 0;
  if (nb == -2147483648)
    {
      b();
    }
  if (nb < 0 && nb != -2147483648)
    {
      nb = nb * (-1);
      nb2 = nb;
      my_putchar('-');
      a(nb, nb2, c);
    }
  else 
    {
      nb2 = nb;
      a(nb, nb2, c);
    }
}

int		a(int nb, int nb2, int c)
{
  int		i;

  while (nb2 >= 10)
    {
      nb2 = nb2 / 10;
      c++;
    }
  while (c >= 0)
    {
      i = c;
      nb2 = nb;
      while (i > 0)
	{
	  nb2 = nb2 / 10;
	  i--;
	}
      nb2 = nb2 % 10;
      my_putchar(48 + nb2);
      c--;
    }
}
