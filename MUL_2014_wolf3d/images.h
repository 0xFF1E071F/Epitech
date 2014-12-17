/*
** images.h for wolf3d in /home/dupard_e/rendus/MUL_2014_fdf
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Dec  4 11:04:05 2014 Erwan Dupard
** Last update Tue Dec 16 13:35:36 2014 Erwan Dupard
*/

#ifndef IMAGES_H_
# define IMAGES_H_

# define SKY (0x0087CEFA)
# define FLOOR (0x00808000)

void            my_show_image(t_infos *s);
void            my_pixel_put_to_image(unsigned long clr, t_vect p, t_infos *s);

#endif	/* !IMAGES_H_ */
