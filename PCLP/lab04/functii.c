#include "functii.h"

int read_array(int v[]) {
  int nr_elements;
  scanf("%d", &nr_elements);

  for (int i = 0; i < nr_elements; i++) {
    int x;
    scanf("%d", &x);
    v[i] = x;
  }

  return nr_elements;
}

void print_array(int n, int v[]) {
  printf("The array has %d elements: ", n);

  for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }

  printf("\n");
}

int sum_array(int n, int v[]) {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += v[i];
  }

  return sum;
}

int min_array(int n, int v[]) {
  int min = __INT_MAX__;

  for (int i = 0; i < n; i++) {
    if (v[i] < min) {
      min = v[i];
    }
  }

  return min;
}

int posmax_array(int n, int v[]) {
  int max = -100000000;
  int posmax = -1;

  for (int i = 0; i < n; i++) {
    if (v[i] > max) {
      posmax = i;
      max = v[i];
    }
  }

  return posmax;
}

float avg_array(int n, int v[]) {
  return (float)sum_array(n, v) / n;
}

/*
int find_array(int n, int v[], int value) {
  for (int i = 0; i < n; i++) {
    if (v[i] == value) {
      return i;
    }
  }

  return -1;
}

*/

void swap(int *addr_x, int *addr_y) {
  int aux = *addr_x;
  *addr_x = *addr_y;
  *addr_y = aux;
}

void sort_array(int n, int v[]) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (v[j] < v[i]) {
        swap(&v[i], &v[j]);
      }
    }
  }
}

void read_matrix(int n, int m, int matrix[100][100]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
}

void print_matrix(int n, int m, int matrix[100][100]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}

void multiply_matrix(int n, int m, int p, int a[100][100], int b[100][100], int c[100][100]) {
  int aux_matrix[100][100] = {0};

  for (int mat_1 = 0; mat_1 < n; mat_1++) {
    for (int mat_2 = 0; mat_2 < p; mat_2++) {
      aux_matrix[mat_1][mat_2] = 0;

      for (int select = 0; select < m; select++) {
        aux_matrix[mat_1][mat_2] += a[mat_1][select] * b[select][mat_2];
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < p; j++) {
      c[i][j] = aux_matrix[i][j];
    }
  }
}

void power_matrix(int n, int a[100][100], int k, int b[100][100]) {
  int aux_matrix[100][100] = {0};       // am nevoie de asta ca sa depozitez la final rezultatul lui a^k tot in b
  int temporary_matrix[100][100] = {0}; // am nevoie de asta ca sa pot apela multiply_matrix() cu aceeasi matrice

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      aux_matrix[i][j] = a[i][j];
    }
  }

  for (int power_counter = 0; power_counter < k - 1; power_counter++) {
    multiply_matrix(n, n, n, aux_matrix, a, temporary_matrix);

    // dupa fiecare inmultire, trebuie bagam rezultat inapoi in aux_matrix()
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        aux_matrix[i][j] = temporary_matrix[i][j];
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      b[i][j] = aux_matrix[i][j];
    }
  }
}

// de aici in jos, parta extra de laborator
int find_array(int n, int v[], int value) {
  int left = 0, right = n;

  while (left < right) {
    int mid = left + (right - left) / 2;

    if (v[mid] == value) {
      return mid;
    } else if (value > v[mid]) {
      left = mid + 1;
    } else {
      right = mid;
    }
  }

  return -1;
}

int diff_array(int n, int v[100], int m, int w[100], int dif[100]) {
  int nr_diff = 0;
  for (int i = 0; i < n; i++) {
    if (find_array(m, w, v[i]) == -1) {
      dif[nr_diff++] = v[i];
    }
  }

  return nr_diff;
}