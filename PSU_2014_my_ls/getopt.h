/*
** getopt.h for my_ls in /home/dupard_e/rendus/PSU_2014_my_ls
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Nov 17 15:08:07 2014 Erwan Dupard
** Last update Sun Nov 23 13:04:07 2014 Erwan Dupard
*/

#ifndef _GETOPT_H_
# define _GETOPT_H_

typedef struct	s_opt
{
  int		R;
  int		l;
  int		d;
  int		r;
  int		t;
  int		g;
}		t_opt;

t_opt		*my_getopt(int argc, char **argv);
void		init_opts(t_opt *t);

#endif	/* !_GETOPT_H_ */
