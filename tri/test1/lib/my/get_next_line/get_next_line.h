/*
** get_next_line.h for get_next_line in /home/dupard_e/rendus/GetNexLine
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Nov 19 15:22:24 2014 Erwan Dupard
** Last update Mon Nov 24 14:31:25 2014 Erwan Dupard
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

# define BUFF_SIZE (2)

int             init_gnl(int *i, char **tmp, char save[]);
char            *my_notbackn(char *tmp, char buffer[]);
char		*get_next_line(const int fd);
char		*my_realloc(char *buf, int size);
int		isbackn(char *str);

#endif	/* !GET_NEXT_LINE_H_ */
