/*
** my_strlen.c for my_strstr in /home/dupard_e/rendu/Piscine_C_J06/ex_04
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Oct  6 16:48:18 2014 Erwan Dupard
** Last update Mon Oct  6 16:48:20 2014 Erwan Dupard
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
