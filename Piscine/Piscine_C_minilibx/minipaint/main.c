/*
** main.c for minipaint in /home/dupard_e/rendus/Piscine_C_minilibx/minipaint
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov  4 15:44:20 2014 Erwan Dupard
** Last update Sun Nov  9 13:30:55 2014 Erwan Dupard
*/

#include "my_inf.h"
#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int		color;

int		rand_val(int a, int b)
{
  srand(time(NULL));
  return (rand() % (b - a) + a);
}

int		mouse_pressed(int keycode, int x, int y, void *param)
{
  t_infos	*t;
  
  t = (t_infos *)param;
  if (keycode == 0x1)
    mlx_pixel_put(t->mlx_ptr, t->win_ptr, x, y, color);
  return (0);
}

int		key_pressed(int keycode, void *param)
{

  if (keycode == 0x63)
      color = rand_val(0, 0x00FFFFFF);
}

int			main()
{
  t_infos		mlx;

  color = 0x00FFFFFF;
  mlx.mlx_ptr = mlx_init();
  mlx.win_ptr = mlx_new_window(mlx.mlx_ptr, 500, 500, "minipaint");
  mlx_mouse_hook(mlx.win_ptr, mouse_pressed, &mlx);
  mlx_key_hook(mlx.win_ptr, key_pressed, NULL);
  mlx_loop(mlx.mlx_ptr);
}
