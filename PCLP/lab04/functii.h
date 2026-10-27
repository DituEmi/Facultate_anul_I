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
int diff_array(int n, int v[100], int m, int w[100], int dif[100]);