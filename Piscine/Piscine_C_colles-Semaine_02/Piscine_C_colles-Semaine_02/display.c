/*
** display.c for Piscine_C_colles-Semaine_02 in /home/dupard_e/rendus/Piscine_C_colles-Semaine_02
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Sat Oct 11 10:38:43 2014 Erwan Dupard
** Last update Sat Oct 11 13:12:21 2014 Erwan Dupard
*/

void		clear(void)
{
  my_putchar('\r');
}

char		*refresh_str(char *str, int pos, char c)
{
  int		i;

  i = 0;
  while(i != my_strlen(str))
    {
      if(i == pos)
	str[i] = c;
      i++;
    }
  return (str);
}
