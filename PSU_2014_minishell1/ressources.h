/*
** ressources.h for minishell1 in /home/dupard_e/rendus/PSU_2014_minishell1
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Dec 31 12:45:54 2014 Erwan Dupard
** Last update Wed Dec 31 14:59:34 2014 Erwan Dupard
*/

#ifndef RESSOURCES_H_
# define RESSOURCES_H_

# include "./include/my.h"

void		check_cmd(int *ok, char **cmd);
char		**get_paths(char *path);
char		*get_str(char *str);
int		check_dir(char *file, char *path);

# define PS1 ("\033[36m\033[1m[minishell1] $> \033[0m")

typedef struct	s_funcs
{
  char		*cmd;
  void(*ptr)(char **, int *);
}		t_funcs;

void		my_exit(char **cmd, int *ok);
void		my_pwd(char **cmd, int *ok);
void		my_cd(char **cmd, int *ok);
void		my_setenv(char **cmd, int *ok);
void		my_unsetenv(char **cmd, int *ok);
void		my_env(char **cmd, int *ok);

#endif	/* !RESSOURCES_H_ */
