/*
** ressources.h for bsq in /home/dupard_e/rendus/CPE_2014_bsq
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 15 10:28:53 2014 Erwan Dupard
** Last update Wed Dec 17 01:12:45 2014 Erwan Dupard
*/

#ifndef RESSOURCES_H_
# define RESSOURCES_H_

typedef struct	s_vect
{
  int		x;
  int		y;
}		t_vect;

int		get_y(int fd);
char		**my_gettab(int fd, int *y);
void		my_show_tab(char **c);
int		check_carre(t_vect pos, char **map, int c, int y);
int		second_part(t_vect cur, t_vect pos, char **map);
t_vect		*check_bsq(char **map, int *b, int y);
void		fill_carre(char ***map, t_vect pos, int c, int y);

#endif	/* !RESSOURCES_H_ */
