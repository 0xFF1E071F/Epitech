/*
** test2.c for test2 in /home/dupard_e/rendus/Piscine_C_minilibx/test2
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct 23 13:49:03 2014 Erwan Dupard
** Last update Fri Oct 24 13:53:57 2014 Erwan Dupard
*/

#include "../my_funcs/my_funcs.h"

int		main()
{
  int		x;
  int		y;
  void		*mlx_ptr;
  void		*win_ptr;
  int		i;
  int		rand_x1;
  int		rand_y1;
  int		rand_x2;
  int		rand_y2;
  int		color;
  int		limit;

  i = 0;
  x = 2000;
  y = 2000;
  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, x, y, "RainBow Dicked !");
  while (1)
    {
      limit = rand_val(100, 1000);
      while (i != limit)
	{
	  rand_x1 = rand_val(0, x);
	  rand_y1 = rand_val(0, y);
	  rand_x2 = rand_val(0, x);
	  rand_y2 = rand_val(0, y);
	  color = rand_val(0, 16777215);
	  draw_line(mlx_ptr, win_ptr, rand_x1, rand_y1, rand_x2, rand_y2, color);
	  usleep(6000);
	  i++;
	}
      mlx_clear_window(mlx_ptr, win_ptr);
      i = 0;
    }
  return (0);  
}
