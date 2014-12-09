/*
** my_aff_params.c for my_aff_params in /home/dupard_e/rendu/Piscine_C_J07/ex_01/my_aff_params
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Oct  7 14:47:30 2014 Erwan Dupard
** Last update Tue Oct  7 14:56:28 2014 Erwan Dupard
*/

int		main(int argc, char **argv)
{
  int		i;
  i = 0;
  while (i != argc)
    {
      my_putstr(argv[i]);
      my_putchar('\n');
      ++i;
    }
  return (0);
}
