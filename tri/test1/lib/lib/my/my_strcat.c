/*
** my_strcat.c for my_strcat in /home/dupard_e/rendu/Piscine_C_J07
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Oct  7 12:02:11 2014 Erwan Dupard
** Last update Fri Nov 21 16:02:43 2014 Erwan Dupard
*/

#include "./my.h"

char		*my_strcat(char *dest, char *src)
{
  int   i;
  int   j;

  j = 0;
  i = my_strlen(dest);
  while (src[j])
    dest[i++] = src[j++];
  dest[i] = '\0';
  return (dest);
}
