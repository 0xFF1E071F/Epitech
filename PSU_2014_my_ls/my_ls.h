/*
** my_ls.h for my_ls in /home/dupard_e/rendus/PSU_2014_my_ls
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Nov 17 16:29:28 2014 Erwan Dupard
** Last update Sun Nov 23 13:07:22 2014 Erwan Dupard
*/

#ifndef _MY_LS_H_
# define _MY_LS_H_

#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "./getopt.h"

# define S_IFMT 0170000
# define S_IFLNK 0120000
# define S_IFDIR 0040000
# define S_IFIFO 0010000
# define S_IFCHR 0020000
# define S_IFBLK 0060000
# define S_IFREG 0100000

int		list_simple_dir(char *dir);
int		list_column_dir(char *dir, t_opt *t);
int		format_line(char *file, struct stat *s, t_opt *t);
void		print_right(struct stat *s);
void            disp_date(const time_t *t);

#endif	/* !_MY_LS_H_ */
