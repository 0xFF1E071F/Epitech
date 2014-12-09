#include <unistd.h>

void		usage();

void		usage()
{
  my_putstr("Usage : ./fdf <file.fdf>\n");
}

int		main(int ac, char *av)
{
  if (argc != 2)
    {
      usage();
      return (0);
    }
  char		buffer[MAX_SIZE];
}

