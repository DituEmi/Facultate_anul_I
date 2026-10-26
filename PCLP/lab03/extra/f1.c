#include <stdio.h>

int g = 696969;
extern void f(int variabila);

int main() {
  f(g);
  return 0;
}