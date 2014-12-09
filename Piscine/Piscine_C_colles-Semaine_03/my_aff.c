/*
** my_aff.c for colle3 in /home/dupard_e/rendus/Piscine_C_colles-Semaine_03
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Sat Oct 25 19:08:09 2014 Erwan Dupard
** Last update Sun Oct 26 10:03:12 2014 Erwan Dupard
*/

#include "my_struct.h"

void		aff_all_colle(int x, int y)
{
  my_putstr("[colle1-3] ");
  my_put_nbr(x);
  my_putchar(' ');
  my_put_nbr(y);
  my_putstr(" || [colle1-4] ");
  my_put_nbr(x);
  my_putchar(' ');
  my_put_nbr(y);
  my_putstr(" || [colle1-5] ");
  my_put_nbr(x);
  my_putchar(' ');
  my_put_nbr(y);
  my_putchar('\n');
}

void		aff_colle(char *colle, int x, int y)
{
  my_putstr(colle);
  my_putchar(' ');
  my_put_nbr(x);
  my_putchar(' ');
  my_put_nbr(y);
  my_putchar('\n');
}
