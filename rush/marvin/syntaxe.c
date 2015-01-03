/*
** syntaxe.c for marvin in /home/dupard_e/rendus/rush/marvin
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Jan  2 20:24:55 2015 Erwan Dupard
** Last update Sat Jan  3 15:05:52 2015 Erwan Dupard
*/

#include "./include/my.h"
#include "./ressources.h"

int		parentheses_ok(char *str)
{
  int		par;

  par = 0;
  while (*str)
    {
      if (*str == '(')
	++par;
      if (*str == ')')
	--par;
      if (par < 0)
	return (0);
      str++;
    }
  if (par != 0)
    return (0);
  return (1);
}

int		space_ok(char *str)
{
  int		spaceC;

  spaceC = 0;
  while (*str)
    {
      if (*str == ' ')
	++spaceC;
      ++str;
    }
  if (spaceC < 1)
    return (0);
  return (1);
}

int		semicolon_ok(char *str)
{
  int		i;

  i = -1;
  while (str[++i]);
  if (str[i - 1] != ';')
    return (0);
  return (1);
}

int		syntaxe_error(char *str)
{
  if (parentheses_ok(str) != 1)
    {
      my_fprintf(2, "[-] Syntaxe error : parenthèse mal placé\n");
      return (1);
    }
  if (space_ok(str) != 1)
    {
      my_fprintf(2, "[-] Syntaxe error : Mauvais éspaces\n");
      return (1);
    }
  if (semicolon_ok(str) != 1)
    {
      my_fprintf(2, "[-] Syntaxe error : Pas de point virgule à la fin\n");
      return (1);
    }
  return (0);
}
