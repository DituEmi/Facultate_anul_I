#include <stdio.h>

int main() {

  int x = 0;

  x = 1 | (2 << 8) | (3 << 16) | (4 << 24);
  printf("x este egal cu: %d\n", x);
  printf("byte cu byte, x este egal cu: ");

  for (unsigned char *pointer = (unsigned char *)&x; pointer < (unsigned char *)&x + 4; pointer++) {
    printf("%hhu ", *pointer); // hhu e pt UNSIGNED CHAR
  }

  printf("\n");
  return 0;
}