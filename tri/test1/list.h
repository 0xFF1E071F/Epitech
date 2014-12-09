/*
** list.h for tri1 in /home/dupard_e/rendus/tri/test1
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov 25 18:06:15 2014 Erwan Dupard
** Last update Tue Nov 25 18:28:30 2014 Erwan Dupard
*/

#ifndef LIST_H_
# define LIST_H_

typedef struct s_list
{
  int		nb;
  struct s_elem	*first;
}		t_list;

typedef struct s_elem
{
  int		nb;
  struct s_elem	*next;
}		t_elem;

#endif	/* !LIST_H_ */
