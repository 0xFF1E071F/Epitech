/*
** my_funcs.c for my_funcs in /home/dupard_e/rendus/Piscine_C_minilibx/my_funcs
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Oct 23 12:08:22 2014 Erwan Dupard
** Last update Fri Nov  7 16:54:25 2014 Erwan Dupard
*/

#include <stdio.h>
#include <time.h>

void		*mlx_new_image(void *mlx_ptr, int x, int y);

int		rand_val(int a, int b)
{
  srand(time(NULL));
  return (rand() % (b - a) + a);
}

void		fill_window(void *mlx_ptr, void *win_ptr, int x, int y, int color)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (j != y)
    {
      while (i != x)
	{
	  mlx_pixel_put(mlx_ptr, win_ptr, i, j, color);
	  i++;
	}
      i = 0;
      j++;
    }
}

void		draw_line(void *mlx_ptr, void *win_ptr, int xi, int yi, int xf, int yf, int color)
{
  int dx = xf - xi;
  int dy = yf - yi;
  int dp = 2 * dy - dx; /* Valeur initiale de dp */
  int deltaE = 2 * dy;
  int deltaNE = 2 * (dy - dx);
  int x = xi;
  int y = yi;

  mlx_pixel_put(mlx_ptr, win_ptr, x, y, color);
  while (x < xi)
    {
      if (dp <= 0) 
	{
	  dp = dp + deltaE; /* Nouveau dp */
	  x++; /* Calcul de x_p+1 */
	}
      else /* On choisit le point NE */
	{
	  dp = dp + deltaNE; /* Nouveau dp */
	  x++; /* Calcul de x_p+1 */
	  y++; /* Calcul de y_p+1 */
	}
      mlx_pixel_put(mlx_ptr, win_ptr, x, y, color);
    }
}

void		draw_box(void *mlx_ptr, void *win_ptr, int x, int y, int l, int l2, int color)
{
  int		i;
  int		j;

  i = x;
  j = y;
  while (i != x + l)
    {
      mlx_pixel_put(mlx_ptr, win_ptr, i, j, color);
      i++;
    }
  while (j != y + l2)
    {
      mlx_pixel_put(mlx_ptr, win_ptr, i, j, color);
      j++;
    }
  while (i != x)
    {
      mlx_pixel_put(mlx_ptr, win_ptr, i, j, color);
      i--;
    }
  while (j != y)
    {
      mlx_pixel_put(mlx_ptr, win_ptr, i, j, color);
      j--;
    }
}

void		draw_degraded_box(void *mlx_ptr, void *win_ptr, int x, int y, int l, int l2, int color_begin, int time)
{
  int		i;
  int		j;

  i = x;
  j = y;
  while (i != x + l)
    {
      mlx_pixel_put(mlx_ptr, win_ptr, i, j, color_begin);
      i++;
      color_begin++;
      usleep(time);
    }
  while (j != y + l2)
    {
      mlx_pixel_put(mlx_ptr, win_ptr, i, j, color_begin);
      j++;
      color_begin++;
      usleep(time);
    }
  while (i != x)
    {
      mlx_pixel_put(mlx_ptr, win_ptr, i, j, color_begin);
      i--;
      color_begin++;
      usleep(time);
    }
  while (j != y)
    {
      mlx_pixel_put(mlx_ptr, win_ptr, i, j, color_begin);
      j--;
      color_begin++;
      usleep(time);
    }
}

void		draw_circle(void *mlx_ptr, void *win_ptr, int r, int x_center, int y_center, int color)
{
  int		x;
  int		y;
  int		m;

  x = 0;
  y = r;
  m = 5 - (4 * r);
  while (x <= y)
    {
      mlx_pixel_put(mlx_ptr, win_ptr, x + x_center, y + y_center, color);
      mlx_pixel_put(mlx_ptr, win_ptr, y + x_center, x + y_center, color);
      mlx_pixel_put(mlx_ptr, win_ptr, -x + x_center, y + y_center, color);
      mlx_pixel_put(mlx_ptr, win_ptr, -y + x_center, x + y_center, color);
      mlx_pixel_put(mlx_ptr, win_ptr, x + x_center, -y + y_center, color);
      mlx_pixel_put(mlx_ptr, win_ptr, y + x_center, -x + y_center, color);
      mlx_pixel_put(mlx_ptr, win_ptr, -x + x_center, -y + y_center, color);
      mlx_pixel_put(mlx_ptr, win_ptr, -y + x_center, -x + y_center, color);
      if (m > 0)
	{
	  y--;
	  m -= (8 * y);
	}
      x++;
      m += (8 * x) + 4;
    }
}

void		draw_dick(void *mlx_ptr, void *win_ptr, int x, int y, int color)
{
  draw_circle(mlx_ptr, win_ptr, 10, x - 10, y, color);
  draw_circle(mlx_ptr, win_ptr, 10, x + 10, y, color);
  draw_box(mlx_ptr, win_ptr, x - 10, y, 20, 200, color);
}

void		draw_jack(void *mlx_ptr, void *win_ptr, int x, int y, int color)
{
  draw_circle(mlx_ptr, win_ptr, 10, x, y, color);
  draw_line(mlx_ptr, win_ptr, x, y + 10, x, y + 50, color);
}

void		draw_filled_box(void *mlx_ptr, void *win_ptr, int x, int y, int l, int l2, int color)
{
  int		j;
  int		i;
  int		bpp;
  int		size_line;
  int		endian;
  void		*img_ptr;
  char		*img;

  i = 0;
  j = 0;
  i = x;
  j = y;
  while (j != y + l2)
    {
      while (i != x + l)
	{
	  mlx_pixel_put(mlx_ptr, win_ptr, i, j, color);
	  i++;
	}
      i = x;
      j++;
    }
}

void		draw_degraded_filled_box(void *mlx_ptr, void *win_ptr, int x, int y, int l, int l2, int begin_color, int time)
{
  int		j;
  int		i;
  int		bpp;
  int		size_line;
  int		endian;
  void		*img_ptr;
  char		*img;

  /* img_ptr = mlx_new_image(mlx_ptr, l, l2); */
  /* img = mlx_get_data_addr(img_ptr, &bpp, &size_line, &endian); */
  
  i = 0;
  j = 0;
  i = x;
  j = y;
  while (j != y + l2)
    {
      while (i != x + l)
	{
	  mlx_pixel_put(mlx_ptr, win_ptr, i, j, begin_color);
	  begin_color += 5;
	  usleep(time);
	  i++;
	}
      i = x;
      j++;
    }
}

/* char		*my_put_pix_in_image(char *img, int x, int y, int color) */
/* { */
  
/* } */

void		draw_dams(void *mlx_ptr, void *win_ptr,int x, int y, int n, int color1, int color2)
{
  int		i;
  int		j;
  int		x_max_box;
  int		y_max_box;

  x_max_box = x / n;
  y_max_box = y / n;
  
  i = 0;
  j = 0;
  while (j < y)
    {
      while (i < x)
	{
	  if ((j + i) % 2)
	    draw_filled_box(mlx_ptr, win_ptr, i, j, n, n, color1);
	  else
	    draw_filled_box(mlx_ptr, win_ptr, i, j, n, n, color2);
	  i += n;
	}
      j += n;
      i = 0;
    }
}
