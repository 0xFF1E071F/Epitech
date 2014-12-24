/*
** base.c for wolf3d in /home/dupard_e/rendus/MUL_2014_wolf3d
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Dec 16 13:25:04 2014 Erwan Dupard
** Last update Wed Dec 24 13:17:55 2014 Erwan Dupard
*/

#include <math.h>
#include "./ressources.h"
#include "./include/my.h"

void		inc_values(t_vect *base, t_vect *A)
{
  base->x += A->x;
  base->y += A->y;
}

void		get_wallx(t_infos *s, t_player *p, t_maze *maze)
{
  t_vect	base;
  t_vect	A;
  float		angle;
  float		distance[WIDTH];
  int		i;

  i = 0;
  angle = p->angle;
  while (angle <= p->angle + FOV)
    {
      A.y = 64;
      base.y = (p->y / 64) * (64) + (64);
      if (angle >= 0.0 && angle <= 180.0)
	{
	  A.y = -64;
	  base.y = (p->y / 64) * (64) - (1);
	}
      A.x = 64 / tan(RAD(angle));
      base.x = p->x + (p->y - base.y) / tan(RAD(angle));
      while ((PROTECT_TAB) && (PROTECT_TAB2) &&
	     maze->map[base.y / 64][base.x / 64] != '1')
	inc_values(&base, &A);
      distance[i++] = sqrt(CAR(base.x - p->x) + CAR(base.y - p->y));
      angle += (FOV / WIDTH);
    }
  draw_wall(s, distance);
}

void		get_wally(t_infos *s, t_player *p, t_maze *maze)
{
  t_vect	base;
  t_vect	A;
  float		angle;
  float		distance[WIDTH];
  int		i;

  i = 0;
  angle = p->angle;
  while (angle <= p->angle + FOV)
    {
      A.x = 64;
      A.y = 64 * tan(RAD(angle));
      base.x = (p->y / 64) * (64) + (64);
      if (angle >= 90 && angle <= 270)
	{
	  A.x = -64;
	  base.x = (p->x / 64) * (64) - (1);
	}
      A.x = 64 / tan(RAD(angle));
      base.x = p->x + (p->y - base.y) / tan(RAD(angle));
      while (PROTECT_TAB && maze->map[base.y / 64][base.x / 64] != '1')
	inc_values(&base, &A);
      distance[i++] = sqrt(CAR(base.x - p->x) + CAR(base.y - p->y));
      angle += (FOV / WIDTH);
    }
  draw_wall(s, distance);
}

void		draw_wall(t_infos *s, float distance[])
{
  int		collumns;
  int		i;
  int		px;
  t_vect	pt;

  collumns = WIDTH;
  i = 0;
  while (collumns-- > 0)
    {
      px = (64 / distance[collumns]) * 300;
      while (i++ < HEIGHT)
	{
	  pt.x = collumns;
	  pt.y = i;
	  if (i == ((HEIGHT - px) / 2) || i == (((HEIGHT - px) / 2) + px))
	    my_pixel_put_to_image(WHITE, pt, s);
	  if (i > ((HEIGHT - px) / 2) && i < (((HEIGHT - px) / 2) + px))
	    my_pixel_put_to_image(DEFAULT_COLOR, pt, s);
	}
      i = 0;
    }
}

void		get_sky_and_floor(t_infos *s)
{
  int		line;
  int		px;
  t_vect	pt;

  px = 0;
  line = 0;
  my_printf("[*] Drawing Sky and Floor..\n");
  while (line <= s->win_y)
    {
      while (px <= s->win_x)
  	{
  	  pt.x = px;
  	  pt.y = line;
  	  if (line < s->win_y / 2)
  	    my_pixel_put_to_image(SKY, pt, s);
  	  else
  	    my_pixel_put_to_image(FLOOR, pt, s);
  	  px++;
  	}
      px = 0;
      line++;
    }
}
