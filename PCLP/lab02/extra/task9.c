#include <stdio.h>

int hash(int x) {
  // Write your code here

  int sum = 0;

  if (x < 0) {
    x = -x;
  }
  sum += (x % 10) * 2;

  if (x < 10) {
    sum += (x % 10) * 2;
    return sum;
  }

  x /= 10;

  while (x != 0) {
    if (x < 10) {
      sum += (x % 10) * 2;
    } else {
      {
        sum += x % 10;
      }
    }
    x /= 10;
  }

  return sum;
}

int main() {
  int n, x;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    printf("%d\n", hash(x));
  }

  return 0;
}