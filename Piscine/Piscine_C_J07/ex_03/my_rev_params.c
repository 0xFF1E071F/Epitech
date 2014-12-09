/*
** my_rev_params.c for my_rev_params in /home/dupard_e/rendu/Piscine_C_J07/ex_03/my_rev_params
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Oct  7 14:54:53 2014 Erwan Dupard
** Last update Tue Oct  7 14:55:23 2014 Erwan Dupard
*/

int		main(int argc, char **argv)
{
  int		i;

  i = (argc - 1);
  while (i >= 0)
    {
      my_putstr(argv[i]);
      my_putchar('\n');
      i--;
    }
  return (0);
}
