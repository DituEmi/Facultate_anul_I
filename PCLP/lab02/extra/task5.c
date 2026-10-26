#include <math.h>
#include <stdio.h>

// am lucrat cu 3 zecimale, e suficient

int main() {

  struct punct {
    int x;
    int y;
  };
  struct punct arr[100] = {0};
  struct punct P = {0, 0};

  int N;
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d%d", &arr[i].x, &arr[i].y);
  }

  // 1. Perimetru:
  float length = 0;
  for (int i = 1; i < N; i++) {
    length += sqrt((arr[i].x - arr[i - 1].x) * (arr[i].x - arr[i - 1].x) + (arr[i].y - arr[i - 1].y) * (arr[i].y - arr[i - 1].y));
  }
  length += sqrt((arr[N - 1].x - arr[0].x) * (arr[N - 1].x - arr[0].x) + (arr[N - 1].y - arr[0].y) * (arr[N - 1].y - arr[0].y));

  printf("Perimetrul este: %.03f\n", length);

  // 2. Arie:
  float area = 0;
  for (int i = 1; i < N; i++) {
    area += 0.5 * (arr[i - 1].x * arr[i].y - arr[i].x * arr[i - 1].y);
  }
  area += 0.5 * (arr[N - 1].x * arr[0].y - arr[0].x * arr[N - 1].y);

  printf("Aria este: %0.3f\n", fabs(area));
  /*
    fabs() face valoarea absoluta a unui float
    imi trebuie in cazul in care se dau punctele in sens invers trigonometric
  */

  return 0;
}