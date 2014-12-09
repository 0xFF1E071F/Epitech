/*
** my_vectors.h for my_vectors in /home/dupard_e/rendus/Piscine_C_minilibx/lines
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov  4 13:44:15 2014 Erwan Dupard
** Last update Fri Dec  5 00:20:44 2014 Erwan Dupard
*/

#ifndef _MY_VECTORS_H_
# define _MY_VECTORS_H_

# define ABS(c) (c >= 0 ? c : -c)

typedef struct	s_tabvect
{
  int		x;
  int		y;
  int		z;
  int		end;
}		t_tabvect;

typedef struct	s_vect
{
  int		x;
  int		y;
  int		z;
}		t_vect;

typedef struct	s_infos
{
  void		*mlx_ptr;
  void		*win_ptr;
}		t_infos;

typedef struct	s_image
{
  void		*img_p;
  char		*img_n;
  int		bpp;
  int		size_line;
  int		endian;
  t_infos	*s;
}		t_image;

typedef struct	s_expose
{
  t_infos	*s;
  t_image	*img;
  int		fd;
}		t_expose;

#endif /* !_MY_VECTORS_H_ */
