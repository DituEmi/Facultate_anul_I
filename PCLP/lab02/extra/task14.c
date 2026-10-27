#include <math.h>
#include <stdio.h>

int main() {

  int x, y, n;
  float OX, OY, OA; // consider A(x, y) si O(0, 0)

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d%d", &x, &y);
    OA = sqrt(pow(x, 2) + pow(y, 2));
    OX = x;
    OY = y;

    // mi a zis Gemini, astea ar trebui sa fie ceva de forma sin_val ca sa nu faca shadowing la sin() din math.h
    float sin, cos, tan, cot;

    sin = OY / OA;
    cos = OX / OA;
    if (OX != 0) {
      tan = OY / OX;
    }
    if (OY != 0) {
      cot = OX / OY;
    }

    printf("(%d, %d): %.02f, %.02f, ", x, y, sin, cos);

    // teoretic aici mai trebuie bagate niste if-uri / operator ternar pentru -inf / inf, dar nu stau sa fac asta ca e simplu
    if (OX == 0) {
      printf("inf, ");
    } else {
      printf("%.02f, ", tan);
    }

    if (OY == 0) {
      printf("inf\n");
    } else {
      printf("%.02f\n", cot);
    }
  }
  return 0;
}