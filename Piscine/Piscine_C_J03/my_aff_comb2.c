/*
** my_aff_comb2.c for my_aff_comb2 in /home/dupard_e/rendu/Piscine_C_J03
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Oct  1 14:11:30 2014 Erwan Dupard
** Last update Wed Oct  1 22:09:04 2014 Erwan Dupard
*/
int		my_aff_chars(int c1, int c2)
{
  if (c1 < 10)
    {
      my_putchar('0');
      my_putchar(c1 + 48);
    }
  else
    {
      my_putchar((c1 / 10) + 48);
      my_putchar((c1 % 10) + 48);
    }
  my_putchar(' ');
  if (c2 < 10)
    {
      my_putchar('0');
      my_putchar(c2 + 48);
    }
  else
    {
      my_putchar((c2 / 10) + 48);
      my_putchar((c2 % 10) + 48);
    }
  my_putchar(',');
  my_putchar(' ');
}

int		my_aff_comb2()
{
  int		c1;
  int		c2;

  c1 = 0;
  c2 = 1;
  while (c1 != 99)
    {
      if (c1 < c2)
	my_aff_chars(c1, c2);
      if (c2 >= 99)
	{
	  c2 = 0;
	  c1 = c1 + 1;
	}
      c2 = c2 + 1;
    }
  my_putchar('\b');
  my_putchar('\b');
}
