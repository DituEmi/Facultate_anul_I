#include <stdio.h>

void swap(int *addr_a, int *addr_b) {

  int aux = *addr_a;
  *addr_a = *addr_b;
  *addr_b = aux;
}

int main() {

  int x, y, n;
  int digits_x[10] = {0}, digits_y[10] = {0};

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d%d", &x, &y);
    int aux_x = x, aux_y = y;
    int nr_digits_x = 0, nr_digits_y = 0;

    do {
      digits_x[nr_digits_x++] = x % 10;
      x /= 10;
    } while (x != 0);

    do {
      digits_y[nr_digits_y++] = y % 10;
      y /= 10;
    } while (y != 0);

    if (nr_digits_x < 4 || nr_digits_y < 4) {
      printf("%d %d\n", aux_x, aux_y);
    } else {
      swap(&digits_x[1], &digits_y[nr_digits_y - 1 - 1]);
      swap(&digits_y[1], &digits_x[nr_digits_x - 1 - 1]);

      for (int i = nr_digits_x - 1; i >= 0; i--) {
        x = x * 10 + digits_x[i];
      }
      for (int i = nr_digits_y - 1; i >= 0; i--) {
        y = y * 10 + digits_y[i];
      }

      printf("%d %d\n", x, y);
    }
  }

  return 0;
}