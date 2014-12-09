/*
** my_putstr.c for my_putstr in /home/dupard_e/rendu/Piscine_C_J04
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct  2 17:25:03 2014 Erwan Dupard
** Last update Mon Oct 20 16:00:37 2014 Erwan Dupard
*/

void		my_putchar(char c);

int		my_putstr(char *str)
{
  while (*str)
    {
      my_putchar(*str);
      str++;
    }
  return (0);
}
