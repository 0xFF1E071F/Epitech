/*
** my_strlen.c for my_showstr in /home/dupard_e/rendu/Piscine_C_J06/ex_17
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Oct  6 20:52:42 2014 Erwan Dupard
** Last update Mon Oct  6 20:52:45 2014 Erwan Dupard
*/

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}
