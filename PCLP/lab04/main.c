#include "functii.h"

int main() {
  int n = 5;
  int v[] = {1, -1, 2, -2, 0};

  int m = 8;
  int w[] = {10, 8, 1, 2, 5, 5, 5, 5};

  int diff[100] = {0};
  int d = diff_array(n, v, m, w, diff);

  print_array(d, diff);
  return 0;

  /*
  int n, v[100] = {0}, value;

  n = read_array(v);
  scanf("%d", &value);
  sort_array(n, v);

  int pos = find_array(n, v, value);
  printf("result: %d\n", pos);
  */
  /*
    int n, k;
  int a[100][100] = {0};

  scanf("%d%d", &n, &k);
  read_matrix(n, n, a);

  power_matrix(n, a, k, a);
  print_matrix(n, n, a);
  */

  /*
  int v[100] = {0};
  int n;
  n = read_array(v);
  print_array(n, v);
  */

  /*
  printf("Sum is: %d\n", sum_array(n, v));
  printf("Min element is: %d\n", min_array(n, v));
  printf("Position of max element is: %d\n", posmax_array(n, v));
  printf("Average of elements is: %.02f\n", avg_array(n, v));
  int value;
  scanf("%d", &value);
  printf("Pozitie: %d\n", find_array(n, v, value));
  sort_array(n, v);
  print_array(n, v);
  scanf("%d%d%d", &n, &m, &p);
  read_matrix(n, m, a);
  read_matrix(m, p, b);
  multiply_matrix(n, m, p, a, b, c);
  print_matrix(n, p, c);

  */

  /*
  input matrici
  4 4 3 0 1 1 1 1 1 1 1 0 10 0 0 0 10 0 0 -1 10 1 -2 20 2 -3 30 3 -4 40 4
  */
}