/*
** get_list.h for pushswap in /home/dupard_e/rendus/CPE_2014_Pushswap
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Nov 27 12:36:19 2014 Erwan Dupard
** Last update Thu Nov 27 14:43:11 2014 Erwan Dupard
*/

#ifndef GET_LIST_H_
# define GET_LIST_H_

int             get_list(t_list **begin, int argc, char **argv);
int		add_elem(t_list **begin, int nb);
void		print_list(t_list **begin);
void		sa(t_list **l_a);

#endif	/* !GET_LIST_H_ */
