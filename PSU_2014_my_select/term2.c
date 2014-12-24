/*
** term2.c for my_select in /home/dupard_e/rendus/PSU_2014_my_select
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 22 16:12:11 2014 Erwan Dupard
** Last update Wed Dec 24 13:44:09 2014 Erwan Dupard
*/

#include <termios.h>
#include <curses.h>
#include <term.h>
#include <stdlib.h>
#include "./term.h"
#include "./include/my.h"

void		my_selected(char *str, int tty)
{
  char		*mr;

  mr = tgetstr("mr", NULL);
  my_fprintf(tty, "%s%s\n", mr, str);
  my_end_all(tty);
}
