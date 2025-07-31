#include "kernel/types.h"
#include "user/user.h"

int main() {
  int bytes = freemem();

  printf("Free memory: %d bytes\n", bytes);
  exit(0);
}

