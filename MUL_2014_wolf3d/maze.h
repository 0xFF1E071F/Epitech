/*
** maze.h for wolf2d in /home/dupard_e/rendus/MUL_2014_wolf3d
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec  8 15:30:28 2014 Erwan Dupard
** Last update Tue Dec  9 12:34:49 2014 Erwan Dupard
*/

#ifndef MAZE_H_
# define MAZE_H_

#include "./my_vectors.h"

typedef struct	s_list
{
  int		z;
  struct s_list	*nxt;
}		t_list;

typedef struct	s_maze
{
  int		x;
  int		y;
  int		len;
  t_list	*maze;
  int		**map;
}		t_maze;

void		init_list(t_list **list);
void		init_vect(t_vect *p);
void		add_value(t_list **list, int value);
void		my_show_list(t_maze *maze);
t_maze		*get_maze_file(int fd);

int             **list_to_int_tab(t_maze *maze);
void		my_show_int_tab(t_maze *maze);

#endif	/* !MAZE_H_ */
