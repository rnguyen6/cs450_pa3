//TEST FILE FOR HOMEWORK 3 u_v2p
// I am using
//this cat.c which already compiles. Sorry for the confusing
//name but this is where the test for u_v2p is
#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int p = atoi(argv[1]);
  printf(1, " physical address: %d\n", u_v2p(p));
  return 1;
}
