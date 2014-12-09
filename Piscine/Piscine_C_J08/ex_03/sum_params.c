/*
** sum_params.c for sum_params in /home/dupard_e/rendu/Piscine_C_J08/ex_03
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Oct  8 10:14:03 2014 Erwan Dupard
** Last update Wed Oct  8 10:59:28 2014 Erwan Dupard
*/

int		argv_len(int argc, char **argv)
{
  int		i;
  int		max_len;

  i = 0;
  max_len = 0;
  while (i != argc)
    {
      max_len = max_len + my_strlen(argv[i]);
      i++;
    }
  return (max_len);
}

char		*sum_params(int argc, char **argv)
{
  int		i;
  char		*str;
  int		max_len;
  int		j;
  int		c;

  c = 0;
  j = 0;
  max_len = argv_len(argc, argv);
  str = malloc(max_len);
  while (i != argc)
    {
      while (argv[i][j] != 0)
	{
	  str[c] = argv[i][j];
	  ++j;
	  c++;
	}
      str[c] = '\n';
      c++;
      j = 0;
      ++i;
    }
  str[c - 1] = '\0';
  return (str);
}
