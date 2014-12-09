/*
** my_strdup.c for my_strdup in /home/dupard_e/rendu/Piscine_C_J08/ex_01
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Oct  8 09:25:00 2014 Erwan Dupard
** Last update Fri Oct 10 20:09:11 2014 Erwan Dupard
*/

#include <stdlib.h>

char		*my_strcpy(char *dest, char *src);

char		*my_strdup(char *src)
{
  char		*s;
  int		l;

  l = my_strlen(src) + 1;
  s = malloc(l * sizeof(*s));
  my_strcpy(s, src);
  s[l - 1] = 0;
  return (s);
}
