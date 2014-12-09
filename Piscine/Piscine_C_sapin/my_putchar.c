/*
** my_putchar.c for sapin in /home/dupard_e/rendu/Piscine_C_sapin
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct  2 18:13:41 2014 Erwan Dupard
** Last update Thu Oct  2 18:14:03 2014 Erwan Dupard
*/

int		my_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}
