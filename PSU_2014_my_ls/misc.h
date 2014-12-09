/*
** formats.h for my_ls in /home/dupard_e/rendus/PSU_2014_my_ls
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov 18 17:27:03 2014 Erwan Dupard
** Last update Wed Nov 26 13:36:36 2014 Erwan Dupard
*/

#ifndef FORMATS_H_
# define FORMATS_H_

#include <sys/types.h>
#include <dirent.h>

# define IS_DIR_OK ( S_ISDIR(s.st_mode) && e->d_name[0] != '.' )
# define IS_MANY_DIR ( count_args_dirs(argc, argv) > 1 )
# define IS_SLASH ( dir[i][my_strlen(dir[i]) - 1] != '/')

int		get_total_blocks(char *path);
void		free_double_tab(char ***a);
DIR             *get_dir_ptr(char *path);
int		display_spaces(int n);
char            *format_dir(char *root, char *file);

#endif	/* !FORMATS_H_ */
