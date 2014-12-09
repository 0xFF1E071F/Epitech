/*
** my_gettab.h for fdf in /home/dupard_e/rendus/MUL_2014_fdf
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Nov  7 15:08:19 2014 Erwan Dupard
** Last update Fri Nov 28 14:25:01 2014 Erwan Dupard
*/

#ifndef _MY_GETTAB_H_
# define _MY_GETTAB_H_

# include "my_vectors.h"
# include "./lib/my/get_next_line/get_next_line.h"

# define IS_NUMBER(c) (c >= '0' && c <= '9')

typedef struct	s_elem
{
  int		x;
  int		y;
  int		z;
  struct s_elem *next;
}		t_elem;

typedef struct	s_list
{
  int		x;
  int		y;
  int		z;
  struct s_elem *first;
}		t_list;

void		init_list(t_list *list);
int		add_coord(t_vect v, t_list *list);
t_list		read_tab(int fd, t_list list, t_vect *c);

#endif	/* !_MY_GETTAB_H_ */
