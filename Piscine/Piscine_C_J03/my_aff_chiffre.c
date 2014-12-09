/*
** my_aff_chiffre.c for my_aff_chiffre in /home/dupard_e/rendu/Piscine_C_J03
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Oct  1 16:26:39 2014 Erwan Dupard
** Last update Wed Oct  1 16:27:12 2014 Erwan Dupard
*/
int		my_aff_chiffre()
{
  int c;

  c = 48;
  while (c <= 57)
    {
      my_putchar(c);
      c = c + 1;
    }
  return (0);
}

