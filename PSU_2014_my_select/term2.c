/*
** term2.c for my_select in /home/dupard_e/rendus/PSU_2014_my_select
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 22 16:12:11 2014 Erwan Dupard
** Last update Wed Jan  7 23:17:09 2015 Erwan Dupard
*/

#include <unistd.h>
#include <termios.h>
#include <curses.h>
#include <term.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include "./term.h"
#include "./include/my.h"

void			my_selected(char *str, int tty)
{
  char			*mr;

  mr = tgetstr("mr", NULL);
  my_fprintf(tty, "%s%s\n", mr, str);
  my_end_all(tty);
}

t_vect			get_termsize()
{
  struct winsize	w;
  t_vect		term;
  t_vect		error;

  error.x = 0;
  error.y = 0;
  if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &w) == -1)
    return (error);
  term.x = w.ws_row;
  term.y = w.ws_col;
  return (term);
}
