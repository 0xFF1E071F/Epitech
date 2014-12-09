/*
** list.h for pushswap in /home/dupard_e/rendus/CPE_2014_Pushswap
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Nov 27 12:34:15 2014 Erwan Dupard
** Last update Mon Dec  8 18:34:42 2014 Erwan Dupard
*/

#ifndef LIST_H_
# define LIST_H_

typedef struct	s_list
{
  int		nb;
  struct s_list *nxt;
}		t_list;

t_list		*get_last_elem(t_list **begin);
t_list		*delete_elem_by_value(t_list **begin, int value);
int		is_sorted_list(t_list **begin);
int		is_unsorted_list(t_list **begin);
void            my_show_list(t_list **list);

#endif	/* !LIST_H_ */
