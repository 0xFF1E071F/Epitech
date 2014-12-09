#include "include/my.h"
#include "fdf.h"
#include <unistd.h>

void		usage();

void		usage()
{
  my_putstr("Usage : ./fdf <file.fdf>\n");
}

int		main(int ac, char *av)
{
  char		buffer[MAX_SIZE];
  int		n;
  int		fd;
  int		**fdf;

  if (argc != 2)
    {
      usage();
      return (0);
    }
  fd = open(argv[1], O_RDONLY);
  if (fd == -1)
    {
      my_putstr("impossible d'ouvrir le fichier\n");
      return (0);
    }
  if ((n = read(fd, buffer, MAX_SIZE + 1)) > 0)
    {
      buffer[MAX_SIZE] = 0;
      fdf = get_fdptab(buffer);
    }
}

