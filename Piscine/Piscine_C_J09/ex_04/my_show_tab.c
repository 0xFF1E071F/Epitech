/*
** my_show_tab.c for my_show_tab in /home/dupard_e/rendu/Piscine_C_J09/ex_04
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Oct 10 19:48:17 2014 Erwan Dupard
** Last update Fri Oct 10 20:12:00 2014 Erwan Dupard
*/

int		my_show_tab(struct s_stock_par *par)
{
  int		i;

  i= 0;
  while (par[i].size_param != 0)
    {
      my_putstr(par[i].str);
      my_putchar('\n');
      my_put_nbr(par[i].size_param);
      my_putchar('\n');
      my_show_wordtab(par[i].tab);
      i++;
    }
  return (0);
}
