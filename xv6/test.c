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
  //int p = atoi(argv[1]);
  uint32_t val = 0;
  while(*argv[1]){
    uint8_t byte = *argv[1]++;
    if(byte >= '0'&& byte <= '9') byte = byte - '0';
    else if (byte >= 'a' && byte <= 'f') byte = byte - 'a' + 10;
    else if (byte >= 'A' && byte <= 'F') byte = byte - 'A' + 10;
    val = (val << 4) | (byte & 0xF);
  }
  int p = val;
  printf(1, "physical address: 0x%x\n", u_v2p(p));
  exit();
}
