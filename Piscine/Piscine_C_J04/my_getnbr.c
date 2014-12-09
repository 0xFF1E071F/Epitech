/*
** my_getnbr.c for my_getnbr in /home/dupard_e/rendu/Piscine_C_J04
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Oct  3 10:19:03 2014 Erwan Dupard
** Last update Fri Oct  3 18:44:40 2014 Erwan Dupard
*/

void		my_putchar(char c)
{
  write(1, &c, 1);
}

int		count_nbr(int i, char *str)
{
  int		c;
  
  c = 0;
  while (str[i] != 0 && str[i] >= '0' && str[i] <= '9')
    {
      if ((c*10) > 2147483648)
	return (0);
      c = c * 10;
      c = c + str[i] - 48;
      i++;
    }
  return (c);
}

int		my_getnbr(char *str)
{
  int		less_c;
  int		i;
  int		isimp;
  int		c;

  i = 0;
  isimp = 0;
  less_c = 0;
  while (str[i] == '-' || str[i] == '+' && str[i] != '\0')
    {
      if(str[i] == '-');
	less_c++;
      i++;
    }
  if ((less_c % 2) == 1)
    isimp = 1;
  c = count_nbr(i, str);
  if(!isimp)
    c = -c;
  return (c);
}

int		main()
{
  my_put_nbr(my_getnbr("---+++--67zd78zd2a89"));
  my_putchar('\n');
  my_put_nbr(my_getnbr("-----65a87"));
  my_putchar('\n');
  my_put_nbr(my_getnbr("---+++--67zd78zd2a89"));
  my_putchar('\n');
}

