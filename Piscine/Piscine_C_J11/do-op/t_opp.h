/*
** t_opp.h for do-op in /home/dupard_e/rendus/Piscine_C_J11/do-op
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Oct 20 13:58:46 2014 Erwan Dupard
** Last update Tue Oct 21 13:38:35 2014 Erwan Dupard
*/

#ifndef T_OPP_H_
# define T_OPP_H_

typedef struct	t_opp
{
  char		*op;
  int		(*func)(int nb1, int nb2);
}		t_opp;

#endif /* T_OPP_H_  */
