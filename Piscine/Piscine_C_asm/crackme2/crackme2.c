#include <stdio.h>

int		main(int argc, char **argv)
{
  if (argc < 2)
    {
      printf("Usage : %s <password>\n", argv[0]);
      return (0);
    }
  while (*argv[1])
    {
      if (*argv[1] != 0x41)
	{
	  printf("Wrong Password\n");
	  return (0);
	}
      argv[1]++;
    }
  printf("Nice dude you got it !\nn'oubliez pas de vous connecter sur IRC :(\non est triste quand on est seul\n");
  return (0);
}
