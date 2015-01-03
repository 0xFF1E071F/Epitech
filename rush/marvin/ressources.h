/*
** ressources.h for marvin in /home/dupard_e/rendus/rush/marvin
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Jan  2 20:24:16 2015 Erwan Dupard
** Last update Sat Jan  3 18:03:22 2015 Erwan Dupard
*/

#ifndef RESSOURCES_H_
# define RESSOURCES_H_

#include "./include/my.h"

# define FUNC_PTR (0x000000001)
# define VARIABLE (0x000000002)
# define FUNCTION (0x000000003)

typedef struct	s_var
{
  char		*name;
  char		*ret;
}		t_var;

typedef struct	s_funcs
{
  char		*name;
  char		*ret;
  char		**types;
}		t_funcs;

typedef struct	s_funcptr
{
  char		*name;
  char		*ret;
  char		**types;
}		t_funcptr;

int		syntaxe_error(char *str);
int		parentheses_ok(char *str);
int		space_ok(char *str);
int		semicolon_ok(char *str);

char		*get_type_of_var(char *str);
char		*get_name_of_var(char *str);
char		*get_name_of_func(char *str);
char		*get_arg_type_of_func(char *str);
int		get_type_of_declaration(char *str);

int		is_alphanum(char c);
int		tab_len(char **tab);

char		*parse_type(char *type);

char		**get_args_types(char *str);

#endif	/* !RESSOURCES_H_ */
