
/*
** 101.c for 101 in /home/dupard_e/rendus/101Chiffrement
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov 25 11:10:26 2014 Erwan Dupard
** Last update Tue Nov 25 12:04:01 2014 Erwan Dupard
*/

#ifndef _101_H_
# define _101_H_

typedef struct	s_letter
{
  int		pos;
  int		ascii;
  char		f;
}		t_letter;

int		get_position(char f, char *alph);
t_letter        *get_message(char *message);
t_letter        *get_key(char **argv);

#endif	/* !_101_H_ */
