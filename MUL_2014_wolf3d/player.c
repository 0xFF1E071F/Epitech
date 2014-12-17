/*
** player.c for wolf3d in /home/dupard_e/rendus/MUL_2014_wolf3d
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Sat Dec 13 15:48:53 2014 Erwan Dupard
** Last update Wed Dec 17 01:49:27 2014 Erwan Dupard
*/

#include <math.h>
#include <stdlib.h>
#include "./include/my.h"
#include "./my_vectors.h"
#include "./player.h"
#include "./maze.h"
#include "./my_vectors.h"

void		player_found(int x, int y)
{
  my_printf("[+] Player found at position %d.5, %d.5\n", x, y);
}

t_player	*get_player_infos(t_maze *maze)
{
  t_vect	cur;
  t_player	*cPlayer;

  cur.x = 0;
  cur.y = 0;
  if ((cPlayer = malloc(sizeof(*cPlayer))) == NULL)
    return (NULL);
  while (cur.y < maze->size.y)
    {
      while (cur.x < maze->size.x)
	{
	  if (maze->map[cur.y][cur.x] == '2')
	    {
	      cPlayer->x = cur.x + 0.5;
	      cPlayer->y = cur.y + 0.5;
	      cPlayer->angle = 0.0;
	      player_found(cur.x, cur.y);
	      return (cPlayer);
	    }
	  cur.x++;
	}
      cur.x = 0;
      cur.y++;
    }
  return (NULL);
}
