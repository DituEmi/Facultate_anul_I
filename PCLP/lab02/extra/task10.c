#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);

  int nr = x;

  while (nr != 1) {
    printf("%d ", nr);

    if (nr % 2 == 0) {
      nr = nr - 1;
    } else {
      nr = (nr + 1) / 2;
    }
  }

  printf("1\n");
  return 0;
}