#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= i + 2; j++) {
      for (int k = 0; k < j; k++) {
        printf("*");
      }
      printf("\n");
    }
  }

  return 0;
}