#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(void)
{
  int fd;
  char buf[512];

  fd = open("randfile",O_RDONLY);
  read(fd,buf,sizeof(buf));
  exit();
}
