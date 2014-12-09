/*
** crypt.c for xor in /home/dupard_e/rendus/XOR
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Oct 21 17:53:35 2014 Erwan Dupard
** Last update Tue Nov 25 10:55:48 2014 Erwan Dupard
*/

#include <stdlib.h>
#include <stdio.h>

char		*crypt(char *string, char *key)
{
  int		i;
  int		j;
  char		*crypted;
  int		lString;
  int		lKey;

  i = 0;
  j = 0;
  lString = my_strlen(string);
  crypted = malloc(lString + 1);
  while (string[i] != '\0')
    {
      if (key[j] == '\0')
	j = 0;
      crypted[i] = (lString ^ key[j]) % lString;
      i++;
      j++;
    }
  crypted[i] = '\0';
  return (crypted);
}

int		main(int argc, char **argv)
{
  if (argc < 3)
    {
      printf("------ XOR StrinG -------\n");
      printf("USAGE : %s <string> <key>\n", argv[0]);
      printf("--------------------------\n");
      return (0);
    }
  // printf("%s\n", crypt(argv[1], argv[2]));
  my_showmem(crypt(argv[1], argv[2]));
  return (0);
}
