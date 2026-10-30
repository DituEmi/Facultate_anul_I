#include "functii.h"

int main() {

  int v[100], n = read_array(v);
  printf("longest subtring length is: %d\n", longest_increasing_subarray(v, n));

  printf("\n");

  return 0;
}

/*
 matrice de 4x4 cu elemente i in {1..16}: 4 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
 */

/*
 int n, matrix[100][100] = {0};
scanf("%d", &n);
{
  read_matrix(n, n, matrix);
  printf("\n");

  print_matrix(n, n, matrix);
  printf("\n");
}
find_special_element(n, n, matrix);

*/

/*
  diagonal_matrix(n, m, matrix, 2);
  printf("\n");
  print_matrix(n, m, matrix);
*/
/*
int n, v[100], x, y;

n = read_array(v);
scanf("%d%d", &x, &y);

int left_index = -1, right_index = -1;
left_index = find_array_2(n, v, x);
right_index = find_array_2(n, v, y + 1);

printf("Number of elements in [%d, %d] is: %d\n", x, y, right_index - left_index);
*/

/*
int n = 5;
int v[] = {1, -1, 2, -2, 0};

int m = 8;
int w[] = {10, 8, 1, 2, 5, 5, 5, 5};

sort_array(n, v);
sort_array(m, w);

// v - w
int diff[100] = {0};
int d = diff_array(n, v, m, w, diff);
print_array(d, diff);

// w - v
for (int i = 0; i < 100; i++) {
diff[i] = 0;
}
d = diff_array(m, w, n, v, diff);
print_array(d, diff);

*/

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
