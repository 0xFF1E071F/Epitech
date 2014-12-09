/*
** my_strlen.c for my_strlen in /home/dupard_e/rendu/Piscine_C_J04
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct  2 17:26:29 2014 Erwan Dupard
** Last update Thu Oct  2 23:23:48 2014 Erwan Dupard
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
