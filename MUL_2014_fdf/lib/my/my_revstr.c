/*
** my_revstr.c for my_revstr in /home/dupard_e/rendu/Piscine_C_J06/ex_3
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Oct  6 09:04:45 2014 Erwan Dupard
** Last update Mon Oct 20 15:59:52 2014 Erwan Dupard
*/

int		my_swap_char(char *a, char *b);
int		my_strlen(char *str);

char		*my_revstr(char *str)
{
  int		l;
  int		i;

  i = 0;
  l = my_strlen(str) - 1;
  while (i != (l / 2) + 1)
    {
      my_swap_char(&str[l-i], &str[i]);
      i++;
    }
  return (str);
}
