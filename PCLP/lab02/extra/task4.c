#include <stdio.h>

/*
problema cu x1^3 + x2^3 + x3^3 = 0
din ce am mai vb si cu colegii, aproach ul e cam asa:
1. faci un for pt x1^3 in intervalul [-50; 50]
2. vezi cat da diferenta dintre 0 - x1^3
3. rezultatul vezi daca poate fi scris ca un x2^3 + x3^3
*/

// update: nu stiu sa fac hashmaps / unorderedmap in C, o sa revin la astea cand invat sa le folosesc
int main() {

  int no_results = 0;

  int x1, x2, x3;
  int cub1, cub2, cub3;
  for (x1 = -50; x1 <= 50; x1++) {
    cub1 = x1 * x1 * x1;
    int result = 0 - cub1;

    for ()
  }
  return 0;
}