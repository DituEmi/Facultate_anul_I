#include <stdio.h>

/*
Pe HackerRank am dat submit la o versiune modifica cu AI, efectiv nu mai aveam rabdare sa schimb aici
Logica mea e buna, aparent site ul voia sa se afiseze dupa fiecare citire, mie mi se parea ca arata urat intercalat cu input ul si am afisat separat la final
Also, Roman vs Arab numerals
Whatever, eu tot codu asta il pun pe GitHub ca a rulat ok
*/
int main() {

  int n = 0;
  long int x[100] = {0}, y[100] = {0};
  do {
    scanf("%ld%ld", &x[n], &y[n]);
  } while (x[n] != 0 || y[n++] != 0);

  printf("\n");
  for (int i = 0; i < n - 1; i++) {

    if (x[i] == 0) {
      // printf("Doua cadrane: ");
      if (y[i] > 0) {
        printf("I II\n");
      } else {
        printf("III IV\n");
      }
    } else if (y[i] == 0) {
      // printf("Doua cadrane: ");
      if (x[i] > 0) {
        printf("I IV\n");
      } else {
        printf("II III\n");
      }
    } else if (x[i] > 0) {
      if (y[i] > 0) {
        printf("I\n");
      } else {
        printf("IV\n");
      }
    } else if (x[i] < 0) {
      if (y[i] > 0) {
        printf("II\n");
      } else {
        printf("III\n");
      }
    }
  }
  return 0;
}