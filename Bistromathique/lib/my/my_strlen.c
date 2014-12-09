/*
** my_strlen.c for my_strncpy in /home/dupard_e/rendu/Piscine_C_J06/ex_02
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Oct  6 16:27:02 2014 Erwan Dupard
** Last update Mon Nov  3 10:40:02 2014 Erwan Dupard
*/

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
      i++;
  return (i);
}
