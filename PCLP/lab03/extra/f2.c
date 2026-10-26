#include <stdio.h>

extern int g;

void f(int variabila) {
  printf("Variabila din fisierul f1.c are valoarea: %d\n", g);

  return;
}
