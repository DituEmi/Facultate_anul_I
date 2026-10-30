#include "functii.h"

// salvez aici codul ca nu mi e clar daca mi poate verifica cineva submission ul pe hackerrank

int main() {

  int frecv[50] = {0};
  int n, count = 6;

  scanf("%d", &n);

  int x;
  for (int i = 0; i < n * 6; i++) {
    scanf("%d", &x);
    frecv[x]++;
  }

  while (count != 0) {
    int frecv_max = 0;
    for (int i = 0; i < 50; i++) {
      if (frecv[i] > frecv_max) {
        frecv_max = frecv[i];
      }
    }

    for (int i = 0; i < 50 && count != 0; i++) {
      if (frecv[i] == frecv_max) {
        printf("%d ", i);
        frecv[i] = -1;
        count--;
      }
    }
  }
  printf("\n");

  return 0;
}