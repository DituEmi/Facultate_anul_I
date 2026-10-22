int power_iter(int n, int k) {
  int p = 1;
  for (int i = 0; i < k; i++) {
    p *= n;
  }

  return p;
}

int power_log(int n, int k) {
  if (k == 0) {
    return 1;
  } else if (k % 2 == 0) {
    int jum = power_log(n, k / 2);
    int half = power_log(n, k / 2);
    return half * half;
  } else {
    return n * power_log(n, k - 1);
  }
}

int power_rec(int n, int k) {
  if (k == 0) {
    return 1;
  } else {
    return n * power_rec(n, k - 1);
  }
}

int count_digits(int n) {
  if (n < 10) {
    return 1;
  } else {
    return 1 + count_digits(n / 10);
  }
}

int reverse_digits(int n) {
  int cnt = count_digits(n);

  int reversed = 0;

  if (cnt == 1) {
    return reversed * 10 + n;
  } else {
    reversed = reversed + n % 10 * power_iter(10, cnt - 1);
    return reversed + reverse_digits(n / 10);
  }
}

bool check_palin(int n) {
  int reversed = reverse_digits(n);

  if (reversed == n) {
    return true;
  } else {
    return false;
  }
}

int next_palin(int n) {
  int aux = n;

  if (check_palin(aux)) {
    return aux;
  } else {
    while (check_palin(aux) == false) {
      aux++;
    }
    return aux;
  }
}

bool is_prime(int n) {

  // nu imi e foarte clar daca aici ```eficient``` <=> sieve of eratosthenes,
  // asa ca am facut relativ eficient; tot dureaza ceva pentru max(int)
  if (n <= 1) {
    return false;
  } else if (n % 2 == 0 && n != 2) {
    return false;
  } else {
    for (int i = 3; i * i <= n; i += 2) {
      if (n % i == 0) {
        return false;
      }
    }
  }
}