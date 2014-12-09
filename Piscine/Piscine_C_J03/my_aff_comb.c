/*
** my_aff_comb.c for my_aff_comb in /home/dupard_e/rendu/Piscine_C_J03
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Oct  1 17:58:13 2014 Erwan Dupard
** Last update Wed Oct 29 10:41:45 2014 Erwan Dupard
*/

void		my_putchar(char c)
{
  write(1, &c, 1);
}

int		my_show_chars(int c1, int c2, int c3)
{
  my_putchar(c1);
  my_putchar(c2);
  my_putchar(c3);
  my_putchar(',');
  my_putchar(' ');
}

int		my_delete_comma()
{
  my_putchar('\b');
  my_putchar('\b');
}

int		my_aff_comb()
{
  char		c1;
  char		c2;
  char		c3;

  c1 = '0';
  c2 = '1';
  c3 = '2';
  while (c1 <= '7')
    {
      my_show_chars(c1, c2, c3);
      if (c3 == '9')
	{
	  if (c2 == '8')
	    {
	      c1 = c1 + 1;
	      c2 = c1 + 1;
	    }
	  else
	    c2 = c2 + 1;
	  c3 = c2 + 1;
	}
      else
	c3 = c3 + 1;
    }
  my_delete_comma();
}

int		main()
{
  my_aff_comb();
}
