/*
** draw_lines.h for draw_lines in /home/dupard_e/rendus/MUL_2014_fdf
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Nov 12 01:30:29 2014 Erwan Dupard
** Last update Fri Dec  5 14:22:24 2014 Erwan Dupard
*/

#ifndef _DRAW_LINES_H_
# define _DRAW_LINES_H_

#include "./my_vectors.h"
#include "./images.h"

void            draw_lines_to_image(t_image *ig, t_vect a, t_vect b, int clr);
void            draw_line1(t_image *img, t_vect a, t_vect b, int color);
void            draw_line2(t_image *img, t_vect a, t_vect b, int color);
void            draw_line3(t_image *img, t_vect a, t_vect b, int color);
void            draw_line4(t_image *img, t_vect a, t_vect b, int color);
void            draw_lines(t_image *img, t_vect a, t_vect b, int color);

#endif	/* !_DRAW_LINES_H_ */
