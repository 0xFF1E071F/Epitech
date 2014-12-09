/*
** my_putstr_err.c for my_putstr_err in /home/dupard_e/rendus/Bistromathique/lib/my
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Nov  3 10:18:43 2014 Erwan Dupard
** Last update Mon Nov  3 11:07:50 2014 Erwan Dupard
*/

#include <unistd.h>

int		my_strlen(char *str);
void		my_putstr(char *str);
void		my_putchar(char c);

void		my_putstr_err(char *str)
{
  my_putchar('B');
  my_putstr("\033[1;31m");
  my_putchar('C');
  write(2, str, my_strlen(str));
  my_putchar('D');
}
