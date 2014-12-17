/*
** player.h for wolf3d in /home/dupard_e/rendus/MUL_2014_wolf3d
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Sat Dec 13 15:47:28 2014 Erwan Dupard
** Last update Sun Dec 14 21:52:00 2014 Erwan Dupard
*/

#ifndef PLAYER_H_
# define PLAYER_H_

# include "./my_vectors.h"
# include "./maze.h"
# include "./my_vectors.h"

typedef struct	s_player
{
  float		x;
  float		y;
  float		angle;
}		t_player;

t_player        *get_player_infos(t_maze *maze);
void		player_found(int x, int y);

#endif	/* !PLAYER_H_ */
