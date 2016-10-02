/*
  d3dc_skeleton.c

  > mingw32-make -f makefile.mingw32
*/

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
  int i;

  fprintf(stdout, "sizeof(size_t): %08x\n", sizeof(size_t));
  for(i = 0; i < ac; ++i)
    fprintf(stdout, "[%02d] = [%s]\n", i, av[i]);
  return 0;
}
