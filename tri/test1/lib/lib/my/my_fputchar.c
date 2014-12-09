/*
** my_putcharerr.c for libmy in /home/dupard_e/rendus/PSU_2014_my_ls/lib/my
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov 18 14:59:17 2014 Erwan Dupard
** Last update Tue Nov 18 15:06:53 2014 Erwan Dupard
*/

#include <unistd.h>

void		my_fputchar(int f, char c)
{
  write(f, &c, 1);
}
