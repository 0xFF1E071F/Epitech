/*
** my_struct.h for colle3 in /home/dupard_e/rendus/Piscine_C_colles-Semaine_03
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Sat Oct 25 16:42:05 2014 Erwan Dupard
** Last update Sun Oct 26 10:04:37 2014 Erwan Dupard
*/

#include <unistd.h>
#include <stdlib.h>

#define BUFF_SIZE 4096

int             get_x(char *str);
int             get_y(char *str);
void		detect(char *str);
int		my_strlen(char *str);
int		my_put_nbr(int n);
void		my_putchar(char c);
void		my_putstr(char *str);
void		aff_all_colle(int x, int y);
void		aff_colle(char *colle, int x, int y);
