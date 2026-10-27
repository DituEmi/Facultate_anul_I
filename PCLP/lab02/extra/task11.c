#include <stdio.h>

int main() {

  int n, x, min_1 = 100000, min_2 = 100000, max_1 = -100000, max_2 = -100000;
  // min_1 < min_2 < max_1 < max_2
  /*
  problema e ca nu trateaza bine 2 edge case uri:
  1. citeste n numere egale
  2. (aici depinde de interpretare..) pentru un input de forma 10 10 20 30 50 50, result: 10 20 30 50, nu 10 10 50 50 ( dar mie asa mi se pare corect, cum face deja )
  */

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    if (x > max_2) {
      max_1 = max_2;
      max_2 = x;
    }
    if (x < max_2 && x > max_1) {
      max_1 = x;
    }
    if (x < min_2 && x > min_1) {
      min_2 = x;
    }
    if (x < min_1) {
      min_2 = min_1;
      min_1 = x;
    }
  }

  printf("result: %d %d %d %d\n", min_1, min_2, max_1, max_2);

  return 0;
}