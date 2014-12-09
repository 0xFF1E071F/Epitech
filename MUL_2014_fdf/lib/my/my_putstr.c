/*
** my_putstr.c for my_putstr in /home/dupard_e/rendu/Piscine_C_J04
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct  2 17:25:03 2014 Erwan Dupard
** Last update Mon Nov  3 10:38:24 2014 Erwan Dupard
*/

#include <unistd.h>

void		my_putchar(char c);
int		my_strlen(char *str);

void		my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
