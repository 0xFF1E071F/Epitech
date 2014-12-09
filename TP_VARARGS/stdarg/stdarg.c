/*
** stdarg.c for stdarg in /home/dupard_e/rendus/TP_VARARGS/stdarg
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Nov  5 19:40:25 2014 Erwan Dupard
** Last update Wed Nov  5 19:56:19 2014 Erwan Dupard
*/
#include <stdio.h>
#include<stdarg.h>

int		func(int first, ...)
{
  va_list	args;
  int		n;
  int		c;

  c = 0;
  va_start(args, first);
  while ((n = va_arg(args, int)) != 0)
    c += n;
  va_end(args);
  return (c);
}
 
int		main(int argc, char **argv)
{
  printf("c : %d\n", func(4, 3, 3));
  return (0);
}
