#include <stdio.h>

int main() {
  int n;
  int log_2 = 0, lg = 0;

  scanf("%d", &n);

  int aux = n;
  while (aux != 0) {
    aux /= 2;
    log_2++;
  }

  log_2--;

  aux = n;
  while (aux != 0) {
    aux /= 10;
    lg++;
  }
  lg--;

  printf("log_2 is: %d and log lg is: %d\n", log_2, lg);
  return 0;
}