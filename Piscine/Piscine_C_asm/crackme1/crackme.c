#include <stdio.h>
#include <string.h>

int		main(int argc, char **argv)
{
  if (argc < 2)
    return (0);
  if (strcmp(argv[1], "!Cr4cK3d!") == 0)
    puts("gagné !");
  else
    puts("perdu !");
  return (0);
}
