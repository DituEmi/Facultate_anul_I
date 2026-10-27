#include <stdio.h>

/*
taskul cu CNP;
asta vreau sa l fac acasa ca sa pot sa fiu atent sa l fac calumea
*/

int main() {

  long int constanta = 279146358279;
  long int cnp;

  scanf("%ld", &cnp);

  int cifra_control = cnp % 10;
  cnp /= 10;
  int de_verificat = 0;

  while (cnp != 0) {
    de_verificat += ((constanta % 10) * (cnp % 10));
    cnp /= 10;
    constanta /= 10;
  }
  if ((de_verificat % 10) < 10) {
    de_verificat = de_verificat % 11;
  } else {
    de_verificat = 1;
  }

  if (cifra_control == de_verificat) {
    printf("VALID\n");
  } else {
    printf("INVALID\n");
  }

  return 0;
}