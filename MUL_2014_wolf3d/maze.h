/*
** maze.h for wolf2d in /home/dupard_e/rendus/MUL_2014_wolf3d
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec  8 15:30:28 2014 Erwan Dupard
** Last update Wed Dec 17 01:40:56 2014 Erwan Dupard
*/

#ifndef MAZE_H_
# define MAZE_H_

# define MSG_NO_PLAYER ("Maybe no player in the maps ??")
# define MSG_NO_PLAYER2 (":( put a '2' in the map\n")
#include "./my_vectors.h"

typedef struct	s_list
{
  int		z;
  struct s_list	*nxt;
}		t_list;

typedef struct	s_maze
{
  int		fd;
  t_vect	size;
  int		len;
  t_list	*maze;
  char		**map;
}		t_maze;

char		**get_maze_file(char *file, t_maze *maze);
void		show_int_tab(int **tab, t_vect *size);
int		is_valid_maze(t_maze *maze);
void		init_vect(t_vect *c);

#endif	/* !MAZE_H_ */
