/*
** my_list.h for my_params_to_list in /home/dupard_e/rendus/Piscine_C_J12/ex_01
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Oct 21 11:25:01 2014 Erwan Dupard
** Last update Tue Oct 21 15:18:43 2014 Erwan Dupard
*/

#ifndef MY_LIST_H_
# define MY_LIST_H_

typedef struct  s_list
{
  char		*av;
  struct s_list *next;
}		t_list;

#endif /* !MY_LIST_H_ */

int		my_strlen(char *str);
int		my_putstr(char *str);
void		my_putchar(char c);

