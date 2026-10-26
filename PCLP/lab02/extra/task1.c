#include <stdio.h>

void swap(int *addr_a, int *addr_b) {
  int aux = *addr_a;
  *addr_a = *addr_b;
  *addr_b = aux;
}

int main() {

  int n;
  int cifre[10] = {0}, nr_cif = 0;
  scanf("%d", &n);

  do {
    cifre[nr_cif++] = n % 10;
    n /= 10;
  } while (n != 0);

  for (int i = 0; i < nr_cif / 2; i++) {
    swap(&cifre[i], &cifre[nr_cif - 1 - i]);
  }

  for (int i = 1; i < nr_cif; i += 2) {
    printf("%d", cifre[i]);
  }

  printf("\n");
  return 0;
}