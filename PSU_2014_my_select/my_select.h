/*
** my_select.h for my_select in /home/dupard_e/rendus/PSU_2014_my_select
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 22 15:02:37 2014 Erwan Dupard
** Last update Wed Dec 24 13:40:50 2014 Erwan Dupard
*/

#ifndef MY_SELECT_H_
# define MY_SELECT_H_

# include "./list.h"

void		rightarrow(t_list **list);
void		my_select(t_list **list, int tty);
void		leftarrow(t_list **list);
void		uparrow(t_list **list);
void		downarrow(t_list **list);
void		my_space(t_list **list);

#endif	/* !MY_SELECT_H_ */
