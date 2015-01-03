/*
** main.c for marvin in /home/dupard_e/rendus/rush/marvin
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Jan  2 20:19:32 2015 Erwan Dupard
** Last update Sat Jan  3 18:01:19 2015 Erwan Dupard
*/

#include <stdlib.h>
#include "./include/my.h"
#include "./ressources.h"

int		get_funcs_struct(struct s_funcs *f, char *str)
{
  if ((f->name = get_name_of_func(str)) == NULL)
    return (1);
  if ((f->ret = get_type_of_var(str)) == NULL)
    return (1);
  if ((f->types = get_args_types(str)) == NULL)
    return (1);
  return (0);
}

int		get_var_struct(struct s_var *v, char *str)
{
  if ((v->ret = get_type_of_var(str)) == NULL)
    return (1);
  if ((v->name = get_name_of_var(str)) == NULL)
    return (1);
  return (0);
}

int		display_var(struct s_var *v, char *str)
{
  if (get_var_struct(v, str))
    return (1);
  my_printf("Déclaration d'%s %s.\n", v->ret, v->name);
  return (0);
}

int		display_func(struct s_funcs *f, char *str)
{
  int		i;

  if (get_funcs_struct(f, str))
    return (1);
  my_printf("Déclaration d'une fonction %s ", f->name);
  my_printf("qui prend en paramètre ");
  i = -1;
  while (f->types[++i])
    my_printf("%s, ", parse_type(f->types[i]));
  my_printf("et qui renvoi %s\n", f->ret);
  return (0);
}

int		main(int argc, char **argv)
{
  int		shape;
  t_funcs	f;
  t_var		v;

  if (argc != 2)
    {
      my_printf("[*] Passer un argument à Marvin..\n");
      return (0);
    }
  if (syntaxe_error(argv[1]))
    return (1);
  shape = get_type_of_declaration(argv[1]);
  if (shape == FUNC_PTR)
    {
      
      return (0);
    }
  if (shape == VARIABLE)
    {
      if (display_var(&v, argv[1]))
	return (1);
      return (0);
    }
  if (shape == FUNCTION)
    {
      if (display_func(&f, argv[1]))
	return (1);
      return (0);
    }
  return (0);
}
