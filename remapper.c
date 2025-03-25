#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int result = system("xmodmap ~/repos/scripts/kb-remap/xmod-remap");
  if (result != 0) {
    printf("remap failed\n");
  }

  return 0;
}
