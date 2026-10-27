#include <stdio.h>

int nr_prieteni(int x) {
  int nr = 0;
  for (int i = 1; i <= x; i++) {
    if (x % i == 0) {
      nr++;
    }
  }

  return nr;
}

int main() {
  int k, n, nr_min = 100001, nr_div_max = 0;

  scanf("%d", &k);
  for (int i = 0; i < k; i++) {
    scanf("%d", &n);

    int nr_div = nr_prieteni(n);
    if (nr_div > nr_div_max) {
      nr_div_max = nr_div;
      nr_min = n;
    } else if (nr_div == nr_div_max && n < nr_min) {
      nr_min = n;
    }
  }

  printf("%d\n", nr_min);
  return 0;
}