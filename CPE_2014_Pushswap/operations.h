/*
** operations.h for pushswap in /home/dupard_e/rendus/CPE_2014_Pushswap
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Nov 27 18:18:24 2014 Erwan Dupard
** Last update Tue Dec  9 16:28:05 2014 Erwan Dupard
*/

#ifndef OPERATIONS_H_
# define OPERATIONS_H_

# include "./list.h"

void		sa(t_list **l_a);
void		sb(t_list **l_a);
void		ss(t_list **l_a, t_list **l_b);
void		pa(t_list **l_a, t_list **l_b);
void		pb(t_list **l_a, t_list **l_b);
void		ra(t_list **l_a);
void		rb(t_list **l_a);
void		rr(t_list **l_a, t_list **l_b);
void		rra(t_list **l_a);

#endif	/* !OPERATIONS_H_ */
