/*
** my_funcs.h for my_funcs in /home/dupard_e/rendus/Piscine_C_minilibx/my_funcs
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct 23 12:09:25 2014 Erwan Dupard
** Last update Fri Oct 24 15:38:05 2014 Erwan Dupard
*/

#include <stdio.h>

int		rand_val(int a, int b);
void		draw_line(void *mlx_ptr, void *win_ptr, int xi, int yi, int xf, int yf, int color);
void		draw_box(void *mlx_ptr, void *win_ptr, int x, int y, int l, int l2, int color);
void		draw_circle(void *mlx_ptr, void *win_ptr, int r, int x_center, int y_center, int color);
void		draw_dick(void *mlx_ptr, void *win_ptr, int x, int y, int color);
void		*mlx_init();
void		*mlx_new_window(void *ptr, int x, int y, char *title);
void            draw_line_clear(void *mlx_ptr, void *win_ptr, int xi, int yi, int xf, int yf, int color);
void		draw_jack(void *mlx_ptr, void *win_ptr, int x, int y, int color);
