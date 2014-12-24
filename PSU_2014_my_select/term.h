/*
** term.h for my_select in /home/dupard_e/rendus/PSU_2014_my_select
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 22 14:17:16 2014 Erwan Dupard
** Last update Wed Dec 24 13:43:34 2014 Erwan Dupard
*/

#ifndef TERM_H_
# define TERM_H_

# include <termios.h>
# include <curses.h>
# include <term.h>

int		raw_mode(struct termios *t);
void		my_underline(char *str, int tty);
void		my_end_all(int tty);
void		clean_screen(int tty);
void		my_selected(char *str, int tty);
int            default_mode(struct termios *t);

#endif	/* !TERM_H_ */
