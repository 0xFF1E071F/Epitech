/*
** stdarg.c for stdarg in /home/dupard_e/rendus/TP_VARARGS/stdarg
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Nov  5 19:40:25 2014 Erwan Dupard
** Last update Wed Nov  5 20:02:53 2014 Erwan Dupard
*/
#include <stdio.h>
#include<stdarg.h>

int		func(char *str, ...)
{
  va_list	args;
  int		arg;

  va_start(args, str);
  while (*str)
    {
      if (*str == '$')
	{
	  arg = (char)va_arg(args, int);
	  my_put_nbr(arg);
	}
      else
	my_putchar(*str);
      str++;
    }
  va_end(args);
}
 
int		main(int argc, char **argv)
{
  func("hello : $ tu vas bien ? $ $", 3, 4, 5);
  return (0);
}
