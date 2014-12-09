/*
** getopt.c for my_ls in /home/dupard_e/rendus/PSU_2014_my_ls
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Nov 17 15:07:59 2014 Erwan Dupard
** Last update Tue Nov 25 13:47:30 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "./getopt.h"
#include "./include/my.h"

void		init_opts(t_opt *t)
{
  t->R = 0;
  t->l = 0;
  t->d = 0;
  t->r = 0;
  t->t = 0;
  t->g = 0;
}

t_opt		*my_getopt(int argc, char **argv)
{
  int		i;
  t_opt		*t;
  int		j;

  if ((t = malloc(sizeof(*t))) == NULL)
      return (NULL);
  j = 0;
  init_opts(t);
  i = 1;
  while (i != argc)
    {
      if (argv[i][0] == '-')
	{
	  while (argv[i][j])
	    {
	      (argv[i][j] == 'R') ? t->R = 1 : 0;
	      (argv[i][j] == 'l') ? t->l = 1 : 0;
	      (argv[i][j] == 'g') ? t->g = 1 : 0;
	      j++;
	    }
	  j = 0;
	}
      i++;
    }
  return (t);
}
