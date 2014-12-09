/*
** my_ls.c for my_ls in /home/dupard_e/rendus/PSU_2014_my_ls
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Nov 17 16:29:50 2014 Erwan Dupard
** Last update Fri Nov 28 12:24:40 2014 Erwan Dupard
*/

#include <stdio.h>
#include <errno.h>
#include <time.h>
#include <grp.h>
#include <pwd.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "./include/my.h"
#include "./my_ls.h"
#include "./misc.h"

int		list_simple_dir(char *dir)
{
  DIR		*d;
  struct dirent	*e;
  struct stat	s;
  char		*file;

  if (!(d = get_dir_ptr(dir)))
    return (1);
  while ((e = readdir(d)))
    {
      file = format_dir(dir, e->d_name);
      if (*e->d_name != '.')
	{
	  if ((stat(file, &s)) == -1)
	    {
	      closedir(d);
	      return (1);
	    }
	  my_printf("%s\t", file);
	}
      free(file);
    }
  my_printf("\n\n");
  if (closedir(d))
    return (1);
  return (0);
}

int		list_column_dir(char *dir, t_opt *t)
{
  DIR		*d;
  struct dirent	*e;
  struct stat	s;
  char		*file;

  if (!(d = get_dir_ptr(dir)))
    return (1);
  my_printf("Total : %d\n", get_total_blocks(dir));
  while ((e = readdir(d)))
    {
      file = format_dir(dir, e->d_name);
      if (e->d_name[0] != '.')
	{
	  if (stat(file, &s) == -1)
	    {
	      closedir(d);
	      return (1);
	    }
	  format_line(e->d_name, &s, t);
	}
      free(file);
    }
  closedir(d);
  my_printf("\n\n");
  return (0);
}

int		format_line(char *file, struct stat *s, t_opt * t)
{
  struct passwd	*p;
  struct group	*g;

  file = file;
  print_right(s);
  my_printf("%d ", s->st_nlink);
  if ((p = getpwuid(s->st_uid)) == NULL)
    return (1);
  if ((g = getgrgid(s->st_gid)) == NULL)
    return (1);
  (!t->g) ? my_printf("%s ", p->pw_name) : 0;
  my_printf("%s", g->gr_name);
  display_spaces(6 - my_intlen(s->st_size));
  my_printf("%d ", s->st_size);
  disp_date(&s->st_mtime);
  if (S_ISDIR(s->st_mode))
    my_printf("\033[34m%s\033[0m\n", file);
  else if ((s->st_mode & S_IXUSR))
    my_printf("\033[32m%s\033[0m\n", file);
  else
    my_printf("%s\n", file);
  return (0);
}

void		print_right(struct stat *s)
{
  S_ISDIR(s->st_mode) ? my_printf("d") : 0;
  S_ISREG(s->st_mode) ? my_printf("-") : 0;
  S_ISBLK(s->st_mode) ? my_printf("b") : 0;
  S_ISLNK(s->st_mode) ? my_printf("s") : 0;
  S_ISCHR(s->st_mode) ? my_printf("c") : 0;
  my_printf(s->st_mode & S_IRUSR ? "r" : "-");
  my_printf(s->st_mode & S_IWUSR ? "w" : "-");
  my_printf(s->st_mode & S_IXUSR ? "x" : "-");
  my_printf(s->st_mode & S_IRGRP ? "r" : "-");
  my_printf(s->st_mode & S_IWGRP ? "w" : "-");
  my_printf(s->st_mode & S_IXGRP ? "x" : "-");
  my_printf(s->st_mode & S_IROTH ? "r" : "-");
  my_printf(s->st_mode & S_IWOTH ? "w" : "-");
  my_printf(s->st_mode & S_IXOTH ? "x" : "-");
  my_putchar(' ');
}

void		disp_date(const time_t *t)
{
  char		*time;
  int		i;

  i = 0;
  time = ctime(t);
  while (time[i])
    i++;
  time[i - 1] = 0;
  my_printf("%s ", time);
}
