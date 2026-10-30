#include <limits.h>
#include <stdio.h>

int read_array(int v[]);
void print_array(int n, int v[]);
int sum_array(int n, int v[]);
int min_array(int n, int v[]);
int posmax_array(int n, int v[]);
float avg_array(int n, int v[]);
int find_array(int n, int v[], int value); // binary search de la extra tasks
void swap(int *addr_x, int *addr_y);
void sort_array(int n, int v[]);
void multiply_matrix(int n, int m, int p, int a[100][100], int b[100][100], int c[100][100]);
void read_matrix(int n, int m, int matrix[100][100]);
void print_matrix(int n, int m, int matrix[100][100]);
void power_matrix(int n, int a[100][100], int k, int b[100][100]);

// partea extra de laborator
int diff_array(int n, int v[], int m, int w[], int dif[]);
int find_array_2(int n, int v[], int value);
void diagonal_matrix(int n, int m, int matrix[100][100], int col);
void print_submatrix(int matrix[100][100], int x, int y, int p, int q);
void print_all_submatrix(int n, int matrix[100][100]);
void find_maxsum_submatrix(int n, int matrix[100][100]);
void print_matrix_border(int matrix[100][100], int x, int y, int p, int q);
void print_spiral_recursive(int matrix[100][100], int x, int y, int p, int q);
void print_diagonals(int n, int matrix[100][100]);
void swap_matrix_columns(int n, int m, int matrix[100][100], int column_index1, int column_index2);
void swap_matrix_rows(int n, int m, int matrix[100][100], int row_index1, int row_index2);
int sum_matrix(int matrix[100][100], int x, int y, int p, int q);
void find_special_element(int n, int m, int matrix[100][100]);
void print_biggest_k_elements(int n, int v[], int k);
int longest_increasing_subarray(int v[], int n);
// permutare hackerrank
int cmmdc(int a, int b);
int cmmmc(int a, int b);
struct permutare {
  int elemente[25];
  int n;
};
int grad_permutare(const struct permutare p);
