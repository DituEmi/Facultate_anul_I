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
      printf("%5d ", matrix[i][j]);
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

int diff_array(int n, int v[], int m, int w[], int dif[]) {
  int nr_diff = 0;
  for (int i = 0; i < n; i++) {
    if (find_array(m, w, v[i]) == -1) {
      dif[nr_diff++] = v[i];
    }
  }

  return nr_diff;
}

int find_array_2(int n, int v[], int value) {
  int left = 0, right = n;

  while (left < right) {
    int mid = left + (right - left) / 2;

    if (value <= v[mid]) {
      right = mid;
    } else {
      left = mid + 1;
    }
  }

  return left;
}

void diagonal_matrix(int n, int m, int matrix[100][100], int col) {
  int i = 0, j = col;
  // trebuie salvat elementul asta, ca sa l pot face 0 in loop;
  int first_element = matrix[i][j];

  // diagonala spre dreapta
  while (i < n && j < m) {
    printf("%d ", matrix[i][j]);
    matrix[i][j] = 0;
    i++;
    j++;
  }
  printf("\n");
  // diagonala spre stanga
  i = 0, j = col;
  // aici e nevoie sa printez primul element separat si sa ma mut in stanga, pentru ca l-am facut deja 0 in loopul precedent;
  printf("%d ", first_element);
  i++, j--;

  while (i < n && j >= 0) {
    printf("%d ", matrix[i][j]);
    matrix[i][j] = 0;
    i++;
    j--;
  }
  printf("\n");
}

void print_submatrix(int matrix[100][100], int x, int y, int p, int q) {
  for (int i = x; i <= p; i++) {
    for (int j = y; j <= q; j++) {
      printf("%5d ", matrix[i][j]);
    }
    printf("\n");
  }
}

void print_all_submatrix(int n, int matrix[100][100]) {
  for (int x = 0; x < n; x++) {
    for (int y = 0; y < n; y++) {
      for (int p = x; p < n; p++) {
        for (int q = y; q < n; q++) {
          print_submatrix(matrix, x, y, p, q);

          printf("----------------------------------------------\n");
        }
      }
    }
  }
}

void find_maxsum_submatrix(int n, int matrix[100][100]) {

  int maxsum = INT_MIN;
  int max_x = -1, max_y = -1, max_p = -1, max_q = -1;

  for (int x = 0; x < n; x++) {
    for (int y = 0; y < n; y++) {
      for (int p = x; p < n; p++) {
        for (int q = y; q < n; q++) {
          // aici avem stabiliti elemente matrix[x][y] si matrix[p][q] care dau colturile: acum determin suma

          int sum = 0;
          for (int i = x; i <= p; i++) {
            for (int j = y; j <= q; j++) {
              sum += matrix[i][j];
            }
          }
          if (sum > maxsum) {
            maxsum = sum;
            max_x = x;
            max_y = y;
            max_p = p;
            max_q = q;
          }
        }
      }
    }
  }

  printf("maxsum is: %d\n", maxsum);
  print_submatrix(matrix, max_x, max_y, max_p, max_q);
}

void print_matrix_border(int matrix[100][100], int x, int y, int p, int q) {
  // linia de sus
  for (int j = y; j < q; j++) {
    printf("%d ", matrix[x][j]);
  }
  // coloana din dreapta
  for (int i = x; i < p; i++) {
    printf("%d ", matrix[i][q]);
  }
  // linia de jos
  for (int j = q; j > y; j--) {
    printf("%d ", matrix[p][j]);
  }
  // coloana din stanga
  for (int i = p; i > x; i--) {
    printf("%d ", matrix[i][y]);
  }

  if (x == p && y == q) {
    printf("%d ", matrix[x][y]);
  }
}

void print_spiral_recursive(int matrix[100][100], int x, int y, int p, int q) {
  if (x > p || y > q) {
    return;
  }
  print_matrix_border(matrix, x, y, p, q);
  print_spiral_recursive(matrix, x + 1, y + 1, p - 1, q - 1);
}

void print_diagonals(int n, int matrix[100][100]) {
  // o sa presupun ca se refera la diagonele || cu aia principala, nu e asa greu pt alea secundare

  // diagonalele de sub aia principala + aia principala
  for (int k = n - 1; k >= 0; k--) {
    int i = k, j = 0;
    while (i < n && j < n) {
      printf("%d ", matrix[i][j]);
      i++;
      j++;
    }
    printf("\n");
  }

  // diagonalele de deasupra aleia principale
  for (int k = 1; k < n; k++) {
    int i = 0, j = k;
    while (i < n && j < n) {
      printf("%d ", matrix[i][j]);
      i++;
      j++;
    }
    printf("\n");
  }
}

void swap_matrix_rows(int n, int m, int matrix[100][100], int row_index1, int row_index2) {
  for (int j = 0; j < m; j++) {
    swap(&matrix[row_index1][j], &matrix[row_index2][j]);
  }
}

void swap_matrix_columns(int n, int m, int matrix[100][100], int column_index1, int column_index2) {
  for (int i = 0; i < n; i++) {
    swap(&matrix[i][column_index1], &matrix[i][column_index2]);
  }
}

int sum_matrix(int matrix[100][100], int x, int y, int p, int q) {
  // compute the sum of elements of a matrix from upper left corner (x, y) to lower right corner (p, q)

  int sum = 0;
  for (int i = x; i <= p; i++) {
    for (int j = y; j <= q; j++) {
      sum += matrix[i][j];
    }
  }

  return sum;
}

void find_special_element(int n, int m, int matrix[100][100]) {

  if (n < 3 || m < 3) {
    printf("(%d, %d)\n", -1, -1);
    return;
  }

  int dif_min = INT_MAX;
  int pos_x = 1, pos_y = -1;
  for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < m - 1; j++) {
      int sums[4] = {0};

      sums[0] = sum_matrix(matrix, 0, 0, i - 1, j - 1);
      sums[1] = sum_matrix(matrix, 0, j + 1, i - 1, m - 1);
      sums[2] = sum_matrix(matrix, i + 1, 0, n - 1, j - 1);
      sums[3] = sum_matrix(matrix, i + 1, j + 1, n - 1, m - 1);

      sort_array(4, sums);

      if ((sums[3] - sums[1]) < dif_min) {
        dif_min = sums[3] - sums[1];
        pos_x = i;
        pos_y = j;
      }
    }
  }

  printf("(%d, %d)\n", pos_x, pos_y);
}

void print_biggest_k_elements(int n, int v[], int k) {

  for (int i = 0; i < k; i++) {
    for (int j = i + 1; j < n; j++) {
      if (v[i] < v[j]) {
        swap(&v[i], &v[j]);
      }
    }
    printf("%d ", v[i]);
  }

  printf("\n");
}

int longest_increasing_subarray(int v[], int n) {
  // fac asta prima data ca prostii, ca nu stiu altfel inca
  // o sa invat cum se face problema asta calumea

  // stiu ca asta teoretic nu mai e bine de folosit, dar nu fac cod portabil right now
  int length[n];
  for (int i = 0; i < n; i++) {
    length[i] = 1;
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (v[j] > v[j - 1]) {
        length[i]++;
      } else {
        break;
      }
    }
  }

  return length[posmax_array(n, length)];
}
struct permutare {
  int elemente[25];
  int n;
};

int cmmdc(int a, int b) {
  while (b != 0) {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int cmmmc(int a, int b) {
  if (a == 0 || b == 0) {
    return 0;
  }

  return a / cmmdc(a, b) * b; // pt overflow safety
}

int grad_permutare(const struct permutare p) {

  // well right now nu stiu sa fac asta, citit acum de pe Gemini
  // UPDATE: am citit, o fac sa moara familia mea de nu

  int visited[25] = {0};

  int grad = 1;

  for (int i = 0; i < p.n; i++) {
    if (visited[i] == 0) {
      int curent_element = i;
      int curent_cycle_length = 0;

      do {
        visited[curent_element] = 1;
        curent_element = p.elemente[curent_element];
        curent_cycle_length++;
      } while (curent_element != i);

      grad = cmmmc(grad, curent_cycle_length);
    }
  }

  // merge, dar IMPORTANT: citirea de pe hackerrank citieste o permutare cu 1..N ca valori, iar eu folosesc aici vectori indexati de la 0
  // trebuie facuta o ajustare undeva, eu am facut o la ei in citire si am modificat valorile din p; works either way
  return grad;
}