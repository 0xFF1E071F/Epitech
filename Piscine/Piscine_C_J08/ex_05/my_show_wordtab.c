/*
** my_show_wordtab.c for my_show_wordtab in /home/dupard_e/rendu/Piscine_C_J08
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Oct  8 16:41:55 2014 Erwan Dupard
** Last update Thu Oct  9 19:18:38 2014 Erwan Dupard
*/

int		my_show_wordtab(char **tab)
{
  int		i;

  i = 0;
  while (tab[i])
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
  return (0);
}
