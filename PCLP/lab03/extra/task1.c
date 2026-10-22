#include <stdio.h>

/*
 task-ul care trebuie sa printeze cel mai apropiat numar prim
 am ales sa printez cand numarul e deja prim un mesaj, ca sa mi fie mie clar ca
 functioneaza corect cand e in mijlocul a 2 numere prime, am printat asta mai
 explicit
 */

int is_nonprime[1000000] = {0};
int size = 1000000;
// o sa presupun ca numerele nu o sa fie > 10^6
void sieve() {
  /*
  o functie de gen sieve of eratosthenes super simpla ca sa vad
  simplu toate numerele prime
  */

  is_nonprime[1] = 1;
  is_nonprime[0] = 1;
  for (int i = 2; i * i <= size - 1; i++) {
    if (is_nonprime[i] == 0) {
      for (int j = i * i; j <= size - 1; j += i) {
        is_nonprime[j] = 1;
      }
    }
  }
}

void print_closest_prime(int n) {
  if (is_nonprime[n] == 0) {
    printf("is already prime\n");
    return;

  } else {
    int aux = 1;
    while ((n + aux) < size && (n - aux) > 0) {
      if (is_nonprime[n - aux] == 0 && is_nonprime[n + aux] == 0) {
        printf("in the middle of 2 priems: %d and %d\n", n - aux, n + aux);
        return;
      }
      if (is_nonprime[n - aux] == 0) {
        printf("closest prime to %d is %d\n", n, n - aux);
        return;
      }
      if (is_nonprime[n + aux] == 0) {
        printf("closest prime to %d is %d\n", n, n + aux);
        return;
      }
      aux++;
    }

    int copy = aux;
    while ((n + aux) < size) {
      if (is_nonprime[n + aux] == 0) {
        printf("closest prime to %d is %d\n", n, n + aux);
        return;
      }
      aux++;
    }

    aux = copy;
    while ((n - aux) > 0) {
      if (is_nonprime[n - aux] == 0) {
        printf("closest prime to %d is %d\n", n, n - aux);
        return;
      }
    }
  }
}

int main() {
  int n;
  scanf("%d", &n);

  sieve();

  while (n > 0)  // pp ca numere pozitive <=> numere STRICT pozitive ( fara 0 )
  {
    print_closest_prime(n);
    scanf("%d", &n);
  }

  return 0;
}