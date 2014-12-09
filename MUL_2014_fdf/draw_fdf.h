/*
** draw_fdf.h for fdf in /home/dupard_e/rendus/MUL_2014_fdf
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov 11 12:58:03 2014 Erwan Dupard
** Last update Thu Dec  4 11:39:53 2014 Erwan Dupard
*/

#ifndef _DRAW_FDF_H_
# define _DRAW_FDF_H_

#include <mlx.h>
#include "./include/my.h"
#include "./my_gettab.h"
#include "./my_vectors.h"
#include "./images.h"

# define CNT1 (1)
# define CNT2 (0.7)
# define CNT3 (20)
# define DEFAULT_COLOR (0x00FFFFFF)

void		link_fdf(t_list *list, t_vect c, t_image *img);
int		link_fdf2(t_list *list, t_vect c, t_image *img);
void            draw_fdf(t_list *list, t_vect c, t_image *img);

#endif	/* !_DRAW_FDF_H_ */
