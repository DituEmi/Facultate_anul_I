#include "functii.h"

int main() {
  // problema gigel si bobi

  int a, b, n;
  scanf("%d%d%d", &a, &b, &n);

  int i = 1;
  while (1) {
    int de_extras;

    if (i % 2 == 1) {
      de_extras = gcd_scaderi(n, a);

      if (de_extras > n) {
        printf("Gigel trebuie sa extraga gcd(%d, %d) = %d carti\n", n, a, de_extras);
        printf("Nu se poate, nu mai sunt suficiente carti in pachet\n");
        printf("Bobi castiga!\n");

        break;
      } else {
        printf("Gigel trebuie sa extraga gcd(%d, %d) = %d carti\n", n, a, de_extras);
        printf("Raman %d - %d =  %d carti in pachet\n", n, de_extras, n - de_extras);

        n -= de_extras;
      }
    } else {
      de_extras = gcd_scaderi(n, b);

      if (de_extras > n) {
        printf("Bobi trebuie sa extraga gcd(%d, %d) = %d carti\n", n, b, de_extras);
        printf("Nu se poate, nu mai sunt suficiente carti in pachet\n");
        printf("Gigel castiga!\n");

        break;
      } else {
        printf("Bobi trebuie sa extraga gcd(%d, %d) = %d carti\n", n, b, de_extras);
        printf("Raman %d - %d =  %d carti in pachet\n", n, de_extras, n - de_extras);

        n -= de_extras;
      }
    }

    i++;
    printf("\n");
  }

  return 0;
}