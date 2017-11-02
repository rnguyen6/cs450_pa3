//TEST FILE FOR HOMEWORK 3 u_v2p
// I am using
//this cat.c which already compiles. Sorry for the confusing
//name but this is where the test for u_v2p is
#include "types.h"
#include "stat.h"
#include "user.h"
#include "stdint.h"

int
main(int argc, char *argv[])
{
  printf(1, "physical address: 0x%x\n", u_v2p(argv[1]));
  exit();
}
