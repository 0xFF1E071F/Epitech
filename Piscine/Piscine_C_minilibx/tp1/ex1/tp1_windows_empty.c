/*
** tp1_windows_empty.c for tp1 in /home/dupard_e/rendus/Piscine_C_minilibx/tp1
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Oct 31 17:15:47 2014 Erwan Dupard
** Last update Fri Oct 31 17:16:22 2014 Erwan Dupard
*/

#include <mlx.h>

int		main()
{
  void		*mlx_ptr;
  void		*win_ptr;

  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, 500, 500, "test");
  return (0);
}
