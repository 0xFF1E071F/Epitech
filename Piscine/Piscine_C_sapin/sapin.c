/*
** sapin.c for sapin in /home/dupard_e/rendu/Piscine_C_sapin
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct  2 17:51:59 2014 Erwan Dupard
** Last update Sun Oct  5 21:08:52 2014 Erwan Dupard
*/

int		display_head(int max_stars)
{
  int		i;

  i = 1;
  while (i <= 7)
    {
      display_spaces((max_stars - i) / 2);
      display_stars(i);
      i = i + 2;
    }
  return (0);
}

int	        my_max_stars(int n)
{
  int		cu_branch;
  int		stars;
  int		max_lines;
  int		line;
  int		base;

  base = 5;
  max_lines = base;
  stars = base;
  cu_branch = 0;
  line = 0;
  while (cu_branch <= (n - 2))
    {
      while (line <= max_lines-1)
	{
	  stars = base + (line * 2);
	  line++;
	}
      base = base + 6;
      max_lines++;
      line = 0;
      cu_branch++;
    }
  return (stars);
}

int		display_body(int n, int max_stars)
{
  int		base;
  int		stars;
  int		line;
  int		max_lines;
  int		cu_branch;

  cu_branch = 0;
  line = 0;
  base = 5;
  stars = base;
  max_lines = base;
  while (cu_branch <= (n - 2))
    {
      while (line <= max_lines-1)
	{
	  stars = base + (line * 2);
	  display_spaces((max_stars - stars) / 2);
	  display_stars(stars);
	  line++;
	}
      base = base + 6;
      max_lines++;
      line = 0;
      cu_branch++;
    }
}

int		display_trunk(int n, int max_stars)
{
  int		x;
  int		y;

  x = 0;
  y = 0;
  while (y != n)
    {
      while (x != n)
	{
	  display_spaces(((max_stars / 2) - n) + 1);
	  display_pipe(n);
	  my_putchar('\n');
	  x++;
	}
      y++;
    }
  return (0);
}
