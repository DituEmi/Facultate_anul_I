#include <stdio.h>

int contains_digits(int nr, int digit) {

  while (nr != 0) {
    if (nr % 10 == digit) {
      return 1;
    }

    nr /= 10;
  }

  return 0;
}

int main() {
  int n, m, c;
  scanf("%d%d%d", &n, &m, &c);

  for (int i = 1; i <= m; i++) {
    int player;
    if (i % n == 0) {
      player = n;
    } else {
      player = i % n;
    }

    printf("P%d - ", player);
    if (contains_digits(i, c) || i % c == 0) {
      printf("Boltz\n");
    } else {
      printf("%d\n", i);
    }
  }

  return 0;
}