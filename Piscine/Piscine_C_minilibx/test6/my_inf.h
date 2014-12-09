/*
** my_vectors.h for my_vectors in /home/dupard_e/rendus/Piscine_C_minilibx/lines
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov  4 13:44:15 2014 Erwan Dupard
** Last update Tue Nov  4 15:44:58 2014 Erwan Dupard
*/

#ifndef _MY_INF_H_
# define _MY_INF_H_

typedef struct	s_vect
{
  int		x;
  int		y;
}		t_vect;

typedef struct	s_infos
{
  void		*mlx_ptr;
  void		*win_ptr;
}		t_infos;

#endif /* !_MY_INF_H_ */
