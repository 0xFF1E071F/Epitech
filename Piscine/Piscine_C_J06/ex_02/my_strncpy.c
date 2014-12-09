/*
** my_strncpy.c for my_strnspy in /home/dupard_e/rendu/Piscine_C_J06/ex_1
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Oct  6 08:59:03 2014 Erwan Dupard
** Last update Tue Oct  7 16:20:01 2014 Erwan Dupard
*/

char		*my_strncpy(char *dest, char *src, int n)
{
  int		i;
  char		c;

  i = 0;
  while (src[i] != 0 && n != 0)
    {
      c = src[i];
      dest[i] = c;
      i++;
      n--;
    }
  if (n > my_strlen(src))
    dest[i] = '\0';
  return (dest);
}
