/*
** main.c for damier in /home/dupard_e/rendus/Piscine_C_minilibx/damier
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Oct 24 14:45:38 2014 Erwan Dupard
** Last update Fri Oct 24 15:50:07 2014 Erwan Dupard
*/

#include "../my_funcs/my_funcs.h"

int		main(int argc, char **argv)
{
  void		*mlx_ptr;
  void		*win_ptr;
  int		x;
  int		y;
  int		color1;
  int		color2;
  int		n;

  x = 500;
  y = 500;
  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, x, y, "DamS");

  while (1)
    {
      color1 = rand_val(0, 0x00FFFFFF);
      color2 = rand_val(0, 0x00FFFFFF);
      n = rand_val(20, 100);
      printf("n : %d\n", n);
      printf("color1 : 0x%x\n", color1);
      printf("color2 : 0x%x\n", color2);
      draw_dams(mlx_ptr, win_ptr, x, y, n, color1, color2); 
      //      mlx_clear_window(mlx_ptr, win_ptr);
    }
  return (0);
}
