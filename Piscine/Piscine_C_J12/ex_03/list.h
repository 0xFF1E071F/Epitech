/*
** list.h for my_rev_list in /home/dupard_e/rendus/Piscine/Piscine_C_J12/ex_03
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Nov 26 14:33:49 2014 Erwan Dupard
** Last update Wed Nov 26 15:02:23 2014 Erwan Dupard
*/

typedef struct s_list
{
  void		*data;
  struct s_list	*next;
}		t_list;
