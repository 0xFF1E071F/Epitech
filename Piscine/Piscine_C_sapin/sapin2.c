/*
** sapin2.c for sapin in /home/dupard_e/rendu/Piscine_C_sapin
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Sun Oct  5 21:02:35 2014 Erwan Dupard
** Last update Sun Oct  5 21:08:28 2014 Erwan Dupard
*/

int		display_pipe(int n)
{
  int		i;

  i = 0;
  while (i != n)
    {
      my_putchar('|');
      i++;
    }
  return (0);
}

int		display_stars(int n)
{
  int		i;

  i = 0;
  while (i != n)
    {
      my_putchar('*');
      i++;
    }
  my_putchar('\n');
}

int		display_spaces(int n)
{
  int		i;

  i = 0;
  while (i != n)
    {
      my_putchar(' ');
      i++;
    }
  return (0);
}

int		sapin(int n)
{
  int		max_stars;

  max_stars = my_max_stars(n);
  display_head(max_stars);
  if (n > 1)
    display_body(n, max_stars);
  display_trunk(n, max_stars);
  return (0);
}
