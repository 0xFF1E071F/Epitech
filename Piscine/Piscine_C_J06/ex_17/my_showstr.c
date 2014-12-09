/*
** my_showstr.c for my_showstr in /home/dupard_e/rendu/Piscine_C_J06/ex_17
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Oct  6 20:44:08 2014 Erwan Dupard
** Last update Tue Oct  7 20:30:49 2014 Erwan Dupard
*/

int		my_showstr(char *str)
{
  while (*str != 0)
    {
      if (is_printable_char(*str))
	my_putchar(*str);
      else
	{
	  my_putchar('\\');
	  if (*str >= 0x1 && *str <= 0xF)
	    my_putchar('0');
	  my_putnbr_base(*str, "0123456789ABCDEF");
	}
      str++;
    }
  return (0);
}
