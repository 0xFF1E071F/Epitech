#include <stdio.h>

int		main(int ac, char **av)
{
  int		n;

  n = 0;
  while (*av[1])
    {
      n = n ^ *av[1];
      av[1]++;
    }
  printf("Keygened : %d\n", n);
}
