/*
** fct.c for fct in /home/dupard_e/rendus/TP_VARARGS
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Nov  5 14:46:05 2014 Erwan Dupard
** Last update Wed Nov  5 15:54:49 2014 Erwan Dupard
*/

#include <stdio.h>

int		fct(int param1, int param2, int param3)
{
  int		*a;
  int		i;

  i = 0;
  a = &param1;
  while (i != 5)
    {
      printf("addr : %p\n", a);
      printf("val : %d\n\n", *a);
      a++;
      i++;
    }
}

int		main()
{
  int		a;
  int		b;
  int		c;


  a = 1;
  b = 2;
  c = 3;
  fct(a, b, c);
}
