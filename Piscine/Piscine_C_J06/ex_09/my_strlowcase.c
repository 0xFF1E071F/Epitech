/*
** my_strlowcase.c for my_strcapitalize in /home/dupard_e/rendu/Piscine_C_J06/ex_09
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Oct  6 18:55:56 2014 Erwan Dupard
** Last update Mon Oct  6 19:03:34 2014 Erwan Dupard
*/

char		*my_strlowcase(char *str)
{
  int		i;

  i = 0;
  while (str[i] != 0)
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	str[i] = str[i] + 32;
      i++;
    }
  return (str);
}
