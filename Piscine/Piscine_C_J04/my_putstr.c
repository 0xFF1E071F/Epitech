/*
** my_putstr.c for my_putstr in /home/dupard_e/rendu/Piscine_C_J04
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct  2 17:25:03 2014 Erwan Dupard
** Last update Thu Oct  2 23:24:12 2014 Erwan Dupard
*/

int		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
