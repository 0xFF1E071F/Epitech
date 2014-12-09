/*
** my_putstr.c for my_putstr in /home/dupard_e/rendu/Piscine_C_J04
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct  2 17:25:03 2014 Erwan Dupard
** Last update Tue Oct  7 11:26:09 2014 Erwan Dupard
*/

int		my_putstr(char *str)
{
  while (*str)
    {
      write(1, &(*str), 1);
      str++;
    }
  return (0);
}
