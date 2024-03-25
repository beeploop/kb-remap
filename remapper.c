#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int result = system("xmodmap xmod-remap");
  if (result == 0) {
    printf("remap success\n");
  } else {
    printf("remap failed\n");
  }

  return 0;
}
