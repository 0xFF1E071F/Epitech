/*
** term.c for my_select in /home/dupard_e/rendus/PSU_2014_my_select
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 22 14:13:54 2014 Erwan Dupard
** Last update Wed Dec 24 13:43:58 2014 Erwan Dupard
*/

#include <termios.h>
#include <curses.h>
#include <term.h>
#include "./term.h"
#include "./include/my.h"

int		raw_mode(struct termios *t)
{
  t->c_lflag &= ~(ICANON | ECHO);
  t->c_cc[VMIN] = 1;
  t->c_cc[VTIME] = 0;
  if (tcsetattr(0, 0, t) == -1)
    return (1);
  return (0);
}

int            default_mode(struct termios *t)
{
  if (tcsetattr(0, 0, t) == -1)
    return (1);
  return (0);
}

void		clean_screen(int tty)
{
  char		*cl;

  cl = tgetstr("cl", NULL);
  my_fprintf(tty, "%s", cl);
}

void		my_underline(char *str, int tty)
{
  char		*us;

  us = tgetstr("us", NULL);
  my_fprintf(tty, "%s%s\n", us, str);
  my_end_all(tty);
}

void		my_end_all(int tty)
{
  char		*end;

  end = tgetstr("me", NULL);
  my_fprintf(tty, "%s", end);
}
