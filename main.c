//Made by my buddy Steven :)

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(int ac, char **av)
{
  int	fd;
  char *line;
  (void)ac;
  fd = open(av[1], O_RDONLY);
  line = NULL;
  while (get_next_line(fd, &line) > 0)
    {
    printf("%s\n", line);
    free(line);
    }
  return (0);
}
