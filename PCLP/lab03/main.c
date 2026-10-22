#include "aux.h"

int main() {

  int n, k;
  scanf("%d", &n);

  bool result = is_prime(n);

  if (result)
    printf("result: prim\n");
  else
    printf("result: nu este prim\n");

  return 0;
}