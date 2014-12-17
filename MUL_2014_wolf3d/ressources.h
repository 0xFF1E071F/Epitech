/*
** ressources.h for wolf3d in /home/dupard_e/rendus/MUL_2014_wolf3d
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Sun Dec 14 21:27:09 2014 Erwan Dupard
** Last update Tue Dec 16 13:37:04 2014 Erwan Dupard
*/

#ifndef RESSOURCES_H_
# define RESSOURCES_H_

#include <stdlib.h>
#include "./my_vectors.h"
#include "./player.h"
#include "./maze.h"

void		opt(char *s);
void		get_mlx_info(t_infos *s);
int		key_pressed(int keycode, void *param);
void		get_arg_vect(t_vect *c, char *arg);
int		draw_wolf3d_to_image(t_infos *s, t_player *p, t_maze *m);
void            get_sky_and_floor(t_infos *s);

#endif	/* RESSOURCES_H_ */
