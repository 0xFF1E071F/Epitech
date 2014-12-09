/*
** my_evil_str.c for my_evil_str in /home/dupard_e/rendu/Piscine_C_J04
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct  2 17:29:30 2014 Erwan Dupard
** Last update Thu Oct  2 17:39:44 2014 Erwan Dupard
*/

char		*my_evil_str(char *str)
{
  int		i;
  int		l;

  i = 0;
  l = my_strlen(str) - 1;
  while (i != (l / 2) + 1)
    {
      my_swap_char(&str[l-i], &str[i]);
      i++;
    }
  return (str);
}
