/*
** my_putstr.c for my_putstr in /home/dupard_e/rendu/Piscine_C_J04
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct  2 17:25:03 2014 Erwan Dupard
** Last update Tue Nov 18 16:12:51 2014 Erwan Dupard
*/

#include <stdio.h>
#include <unistd.h>
#include "./my.h"

int		my_putstr(char *str)
{
  write(1, str, my_strlen(str));
  return (my_strlen(str));
}
