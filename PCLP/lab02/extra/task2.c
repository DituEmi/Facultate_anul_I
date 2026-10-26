#include <stdio.h>

int main() {
  int a, b;
  scanf("%d%d", &a, &b);

  if (a == 0) {
    printf("result: %d\n", b);
  } else if (b == 0) {
    printf("result, %d\n", a);
  } else {
    while (a != b) {
      if (a > b) {
        a -= b;
      } else {
        b -= a;
      }
    }
    printf("result: %d\n", a);
  }

  return 0;
}