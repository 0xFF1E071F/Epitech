/*
** my_sort_int_table.c for my_sort_int_table in /home/dupard_e/rendu/Piscine_C_J04
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Oct  3 16:02:43 2014 Erwan Dupard
** Last update Fri Oct  3 16:22:53 2014 Erwan Dupard
*/

int		my_sort_int_table(int *tab, int size)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  int save;
  while(i != size)
    {
      save = tab[i];
      while (j != size)
	{
	  if (tab[j] < save)
	    my_swap(&tab[j], &save);
	}
    }
}
