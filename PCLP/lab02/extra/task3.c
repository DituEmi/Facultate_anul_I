#include <stdio.h>

int gcd_scaderi(int a, int b) {
  if (a == b) {
    return a;
  }

  if (a == 0) {
    return b;
  } else if (b == 0) {
    return a;
  } else {
    if (a > b) {
      return gcd_scaderi(a - b, b);
    } else {
      return gcd_scaderi(a, b - a);
    }
  }
}

int main() {

  int n;
  scanf("%d", &n);

  int a, b;
  scanf("%d%d", &a, &b);
  a = gcd_scaderi(a, b);

  for (int i = 2; i < n; i++) {
    scanf("%d", &b);
    a = gcd_scaderi(a, b);
  }

  printf("result: %d\n", a);
  return 0;
}