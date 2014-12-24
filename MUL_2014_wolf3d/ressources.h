/*
** ressources.h for wolf3d in /home/dupard_e/rendus/MUL_2014_wolf3d
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Sun Dec 14 21:27:09 2014 Erwan Dupard
** Last update Wed Dec 24 13:15:38 2014 Erwan Dupard
*/

#ifndef RESSOURCES_H_
# define RESSOURCES_H_

# include <stdlib.h>

# define M_PI (20)
# define SKY (0x0087CEFA)
# define FLOOR (0x00808000)
# define CAR(c) ((c) * (c))
# define PI (3.141592654)
# define RAD(a) (a / 180 * PI)
# define ABS(c) (c >= 0 ? c : -c)
# define IS_NUMBER(c) ((c >= '0' && c <= '9'))
# define WIDTH (1920)
# define HEIGHT (1080)
# define FOV (60.0)
# define DEFAULT_COLOR (0x00000000)
# define WHITE (0x00FFFFFF)
# define PROTECT_TAB ((base.x >= 0) && (base.y >= 0))
# define PROTECT_TAB2 ( (base.y / 64 < s->win_y) && (base.x / 64 < s->win_y))
typedef struct	s_vect
{
  int		x;
  int		y;
  int		z;
}		t_vect;

typedef struct	s_image
{
  void		*img_p;
  char		*img_n;
  int		bpp;
  int		size_line;
  int		endian;
}		t_image;

typedef struct	s_player
{
  float		x;
  float		y;
  float		angle;
}		t_player;

typedef struct	s_maze
{
  int		fd;
  t_vect	size;
  int		len;
  char		**map;
}		t_maze;

typedef struct	s_infos
{
  t_player	p;
  t_maze	m;
  void		*mlx_ptr;
  void		*win_ptr;
  char		*title;
  int		win_x;
  int		win_y;
  t_image	img;
}		t_infos;

void            my_show_image(t_infos *s);
void		clean_image(t_infos *s);
void            my_pixel_put_to_image(unsigned long clr, t_vect p, t_infos *s);

t_player        *get_player_infos(t_maze *maze);
void		player_found(int x, int y);

char		**get_maze_file(char *file, t_maze *maze);
void		show_int_tab(int **tab, t_vect *size);
int		is_valid_maze(t_maze *maze);
void		init_vect(t_vect *c);

void		opt(char *s);
void		get_mlx_info(t_infos *s);
int		key_pressed(int keycode, void *param);
void		get_arg_vect(t_vect *c, char *arg);
int		draw_wolf3d_to_image(t_infos *s, t_player *p, t_maze *m);
void            get_sky_and_floor(t_infos *s);
void		get_wallx(t_infos *s, t_player *p, t_maze *maze);
void		get_wally(t_infos *s, t_player *p, t_maze *maze);
void		draw_wall(t_infos *s, float distance[]);
int		catch_error(t_maze **maze, char *av1, t_player **player);

#endif	/* RESSOURCES_H_ */
