/*
** my_putstr.c for sapin in /home/dupard_e/rendu/Piscine_C_sapin
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct  2 18:21:30 2014 Erwan Dupard
** Last update Sun Oct  5 21:10:23 2014 Erwan Dupard
*/

int		my_putstr(char *s)
{
  int		i;

  i = 0;
  while (s[i] != '\0')
    {
      my_putchar(s[i]);
      i++;
    }
}
