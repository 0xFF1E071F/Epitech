/*
** main.c for test3 in /home/dupard_e/rendus/Piscine_C_minilibx/test3
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Oct 24 13:17:55 2014 Erwan Dupard
** Last update Fri Oct 24 14:44:09 2014 Erwan Dupard
*/

#include "../my_funcs/my_funcs.h"

int		main()
{
  int		x;
  int		y;
  void		*mlx_ptr;
  void		*win_ptr;
  char		buffer[4];
  int		i;
  int		rand_x;
  int		rand_y;
  int		color;
  int		limit;

  i = 0;
  x = 1000;
  y = 1000;
  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, x, y, "RainBox Dicked !");
  while (1)
    {
      limit = rand_val(100, 1000);
      while (i != limit)
	{
	  rand_x = rand_val(0, x);
	  rand_y = rand_val(0, y);
	  printf("rand_x : %d && ", rand_x);
	  printf("rand_y : %d\n", rand_y);
	  color = rand_val(0, 16777215);
	  draw_line(mlx_ptr, win_ptr, rand_x, rand_y, 500, 500, color);
	  draw_circle(mlx_ptr, win_ptr,5 , rand_x, rand_y, color);
	  usleep(6000);
	  i++;
	}
      mlx_clear_window(mlx_ptr, win_ptr);
      i = 0;
    }
  return (0);  
}
