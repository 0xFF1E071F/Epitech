/*
** list.h for my_select in /home/dupard_e/rendus/PSU_2014_my_select
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Dec 16 10:59:42 2014 Erwan Dupard
** Last update Wed Jan  7 18:51:31 2015 Erwan Dupard
*/

#ifndef LIST_H_
# define LIST_H_

typedef struct	s_list
{
  char		*name;
  int		selected;
  int		on;
  struct s_list	*nxt;
  struct s_list *prv;
}		t_list;

int		add_elem_to_list(char *name, t_list **list);
void            my_params_to_list(t_list **list, int argc, char **argv);
void		my_show_list(t_list **list, int tty);
void		print_result(t_list **list);
int		delete_elem_from_list(t_list **list);
int		count_elem(t_list **list);

#endif	/* !LIST_H_ */
