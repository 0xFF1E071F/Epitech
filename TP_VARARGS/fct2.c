/*
** fct2.c for fct2 in /home/dupard_e/rendus/TP_VARARGS
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Nov  5 16:04:20 2014 Erwan Dupard
** Last update Wed Nov  5 16:10:10 2014 Erwan Dupard
*/

#include <stdio.h>

typedef struct	s_ex2
{
  char		a;
  int		b;
  short		c;
}		t_ex2;

int             fct(int param1, t_ex2 param2, char *param3);

int		main()
{
  t_ex2		t;

  t.a = 'z';
  t.b = 2;
  t.c = 18;
  fct(3, t, "lolilol");
}

int		fct(int param1, t_ex2 param2, char *param3)
{
  printf("param1 : (%p)%d\n",  param1, param1);
  printf("param1 : (%p)0\n",  param2, param2);
  printf("param1 : (%p)%s\n",  param3, param3);
}
