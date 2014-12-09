/*
** my_strcat.c for my_strcat in /home/dupard_e/rendu/Piscine_C_J07
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Oct  7 12:02:11 2014 Erwan Dupard
** Last update Tue Oct  7 14:08:52 2014 Erwan Dupard
*/

char		*my_strcat(char *dest, char *src)
{
  int		l;
  int		i;

  i = 0;
  l = my_strlen(dest);
  while (src[i])
    {
      dest[l] = src[i];
      l++;
      i++;
    }
  dest[l + 1] = 0;
  return (dest);
}
