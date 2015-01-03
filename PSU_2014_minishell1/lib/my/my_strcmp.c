/*
** my_strcmp.c for my_putnbr_base in /home/dupard_e/rendu/Piscine_C_J06/ex_15
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Oct  6 14:27:47 2014 Erwan Dupard
** Last update Wed Dec 31 15:30:17 2014 Erwan Dupard
*/

int		my_strcmp(char *s1, char *s2)
{
  while (*s1 && *s2)
    {
      if (*s1 != *s2)
	return (*s1 - *s2);
      s1++;
      s2++;
    }
  if (*s1 != *s2)
    return (*s1 - *s2);
  else
    return (0);
}
