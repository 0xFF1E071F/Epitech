/*
** parse.c for marvin in /home/dupard_e/rendus/rush/marvin
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Jan  2 20:50:24 2015 Erwan Dupard
** Last update Sat Jan  3 14:59:04 2015 Erwan Dupard
*/

#include <stdlib.h>
#include "./ressources.h"
#include "./include/my.h"

char		*get_name_of_var(char *str)
{
  char		*name;
  int		i;

  i = -1;
  if ((name = malloc(my_strlen(str) + 1)) == NULL)
    return (NULL);
  while (*str)
    {
      if (*str == ' ')
	{
	  str++;
	  if (*(str + 1) == '*')
	    str++;
	  while (*str != ';')
	    name[++i] = *(str++);
	}
      if (*str)
	str++;
    }
  return (name);
}

char		*parse_type(char *type)
{
 if (my_strcmp(type, "int") == 0)
    {
      free(type);
      if ((type = my_strdup("un entier")) == NULL)
	return (NULL);
    }
  if (my_strcmp(type, "char") == 0)
    {
      free(type);
      if ((type = my_strdup("un charactère")) == NULL)
	return (NULL);
    }
  if (my_strcmp(type, "short") == 0)
    {
      free(type);
      if ((type = my_strdup("un entier court")) == NULL)
	return (NULL);
    }
  if (my_strcmp(type, "long") == 0)
    {
      free(type);
      if ((type = my_strdup("un entier long")) == NULL)
	return (NULL);
    }
  return (type);
}

char		*get_type_of_var(char *str)
{
  char		*type;
  int		i;

  i = 0;
  if ((type = malloc(my_strlen(str) + 1)) == NULL)
    return (NULL);
  while (*str != ' ')
    {
      type[i] = *str;
      ++i;
      ++str;
    }
  if (*(str + 1) == '*')
    my_printf("pointeur sur ");
  if ((type = parse_type(type)) == NULL)
    return (NULL);
  return (type);
}

char		*get_name_of_func(char *str)
{
  char		**tab;
  int		i;

  i = -1;
  if ((tab = my_str_to_word_tab(str)) == NULL)
    return (NULL);
  if (tab[1])
    {
      while (tab[1][++i])
	tab[1][i] == '(' ? tab[1][i] = 0 : 0;
      return (tab[1]);
    }
  return (NULL);
}

char		*get_arg_type_of_func(char *str)
{
  int		i;
  char		*type;

  i = -1;
  if ((type = malloc(my_strlen(str) + 1)) == NULL)
      return (NULL);
  while (*(str - 1) != '(' && *str)
    str++;
  while (*(str - 1) != ' ' && *str)
    {
      type[++i] = *str;
      str++;
    }
  type[i] = 0;
  if ((type = parse_type(type)) == NULL)
    return (NULL);
  return (type);
}
