/*
** type.c for marvin in /home/dupard_e/rendus/rush/marvin
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Jan  2 20:43:25 2015 Erwan Dupard
** Last update Fri Jan  2 23:17:55 2015 Erwan Dupard
*/

#include "./include/my.h"
#include "./ressources.h"

int		count_words(char *str)
{
  int		wordC;

  wordC = 1;
  while (*str)
    {
      if (*str == ' ' || *str == '(' || *str == ')')
	{
	  ++wordC;
	  while ((*str == ' ' || *str == '(' || *str == ')') && *str != 0)
	    str++;
	}
      if (*str)
	++str;
    }
  return (wordC);
}

int		get_type_of_declaration(char *str)
{
  int		wordC;

  wordC = count_words(str);
  if (wordC == 2)
    return (VARIABLE);
  while (*str)
    {
      if (*str == '(' && *(str + 1) == '*')
	return (FUNC_PTR);
      else
	return (FUNCTION);
      str++;
    }
  return (VARIABLE);
}
