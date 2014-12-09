/*
** my_aff_alpha.c for my_aff_alpha in /home/dupard_e/rendu/Piscine_C_J03
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Oct  1 16:25:20 2014 Erwan Dupard
** Last update Wed Oct  1 16:25:21 2014 Erwan Dupard
*/
int		my_aff_alpha()
{
  int i;

  i = 'a';
  while (i <= 'z')
    {
      my_putchar(i);
      i = i + 1;
    }
  return (0);
}

