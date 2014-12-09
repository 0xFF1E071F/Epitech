/*
** main.c for test1 in /home/dupard_e/rendus/Piscine_C_minilibx/test1
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct 23 09:36:05 2014 Erwan Dupard
** Last update Thu Oct 23 15:44:05 2014 Erwan Dupard
*/
#include "../my_funcs/my_funcs.h"

int		main()
{
  void		*mlx_ptr;
  void		*win_ptr;
  int		x;
  int		y;
  int		limit;
  int		rand_x;
  int		rand_y;
  int		i;
  int		color;

  x = 1000;
  y = 1000;
  i = 0;
  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, x, y, "Dicked Binary");
  while (1)
    {
      limit = rand_val(100, 600);
      while (i != limit)
	{
	  color = rand_val(0x0, 0xFFFFFF);
	  rand_x = rand_val(0, x);
	  rand_y = rand_val(0, y);
	  draw_dick(mlx_ptr, win_ptr, rand_x, rand_y, color);
	  usleep(4000);
	  i++;
	}
      i = 0;
      mlx_clear_window(mlx_ptr, win_ptr);
    }
  return (0);
}
