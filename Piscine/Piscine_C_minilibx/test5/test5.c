/*
** test5.c for test5 in /home/dupard_e/rendus/Piscine_C_minilibx/test5
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Oct 29 12:01:28 2014 Erwan Dupard
** Last update Wed Oct 29 17:16:54 2014 Erwan Dupard
*/

#include "../my_funcs/my_funcs.h"

int		main()
{
  int		rand_x;
  int		rand_y;
  int		rand_l;
  int		rand_h;
  int		rand_color;
  int		rand_limit;
  int		rand_time;
  void		*mlx_ptr;
  void		*win_ptr;
  int		x;
  int		y;
  int		i;
  int		limit;

  x = 500;
  y = 500;
  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, x, y, "Rectangle degradé");
  i = 0;
  rand_color = rand_val(0, 0x00FFFFFF);
  //  fill_window(mlx_ptr, win_ptr, x, y, 0x00FFFFFF);
  while (1)
    {
      limit = rand_val(50, 100);
      while (i != limit)
	{
	  //	  fill_window(mlx_ptr, win_ptr, x, y, rand_color);
	  rand_x = rand_val(0, x);
	  rand_y = rand_val(0, y);
	  rand_l = rand_val(10, 100);
	  rand_h = rand_val(10, 100);
	  rand_color = rand_val(0, 0x00FFFFFF);
	  rand_time = rand_val(200, 1000);
	  draw_degraded_filled_box(mlx_ptr, win_ptr, rand_x, rand_y, rand_l, rand_h, rand_color, 0);
	  i++;
	}
      mlx_clear_window(mlx_ptr, win_ptr);
      i = 0;
    }
  return (0);
}
