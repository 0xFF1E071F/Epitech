/*
** main.c for test3 in /home/dupard_e/rendus/Piscine_C_minilibx/test3
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct 23 15:29:16 2014 Erwan Dupard
** Last update Thu Oct 23 15:36:50 2014 Erwan Dupard
*/

#include "../my_funcs/my_funcs.h"

int		main(int argc, char **argv)
{
  int		i;
  int		rand_x1;
  int		rand_y1;
  int		rand_x2;
  int		rand_y2;
  int		limit;
  int		x;
  int		y;
  void		*mlx_ptr;
  void		*win_ptr;
  int		color;

  x = 1000;
  y = 1000;
  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, x, y, "BeautifulZ Lines");
  while (1)
    {
      limit = rand_val(100, 1000);
      while (i != limit)
	{
	  color = rand_val(0, 0xFFFFFF);
	  rand_x1 = rand_val(0, x);
	  rand_y1 = rand_val(0, y);
	  rand_x2 = rand_val(0, x);
	  rand_y2 = rand_val(0, y);
	  draw_line_clear(mlx_ptr, win_ptr, rand_x1, rand_y1, rand_x2, rand_y2, color);
	  i++;
	}
      i = 0;
    }
  return (0);
}
