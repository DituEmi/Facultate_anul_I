#include <stdio.h>

int main() {
  int A, B;

  scanf("%d %d", &A, &B);
  int i = A;

primul_for:
  if (i <= B) {

    bool prim = true;

    if (i == 1) {
      prim = false;
    } else if (i % 2 == 0 && i != 2) {
      prim = false;
    } else {
      int j = 3;
    al_doilea_for:

      if (j * j <= i) {
        if (i % j == 0) {
          prim = false;
        }

        j += 2;
        if (j * j <= i) {
          goto al_doilea_for;
        }
      }
    }

    if (prim == true) {
      printf("%d ", i);
    }

    i++;
    if (i <= B) {
      goto primul_for;
    }

    printf("\n");
    return 0;
  }
}