/*
** my_putstr.c for Piscine_C_colles-Semaine_02 in /home/dupard_e/rendus/Piscine_C_colles-Semaine_02
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Sat Oct 11 10:50:29 2014 Erwan Dupard
** Last update Sat Oct 11 10:51:22 2014 Erwan Dupard
*/

int		my_putstr(char *str)
{
  while (*str)
    {
      my_putchar(*str);
      str++;
    }
  return (0);
}
