int gcd_scaderi(int a, int b) {
  if (a == 0) {
    return b;
  }
  if (b == 0) {
    return a;
  }

  if (a == b) {
    return a;
  } else if (a > b) {
    return gcd_scaderi(a - b, b);
  } else {
    return gcd_scaderi(a, b - a);
  }
}

int gcd_impartiri(int a, int b) {
  int r = a % b;

  while (r != 0) {
    a = b;
    b = r;
    r = a % b;
  }

  return b;
}

int cmmmc(int a, int b) { return (a * b) / gcd_scaderi(a, b); }

int fib(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return fib(n - 1) + fib(n - 2);
  }
}

int is_power_2(int n) {
  // am facut putin pe dos: 1 - nu e bun, 0 - este putere a lui 2
  if (n % 2 == 1 && n != 1) {
    return 1;
  } else if (n == 1) {
    return 0;
  } else {
    return 0 + is_power_2(n / 2);
  }
}

int is_power_4(int n) {
  /*
  inteleg ca functia pentru task-ul asta trebuia constrauita pe idea de la
  putere a lui 2, ca de aia se cheama follow-up, dar am facut diferit; aia e

  also, tot am facut invers (dar e mult mai usor sa fie 0 - bun si orice
  altceva gresit)
  */

  if (n == 4 || n == 1) {
    return 0;
  } else if (n == 0) {
    return 0;
  } else {
    return n % 4 + is_power_4(n / 4);
  }
}

int suma_cifre(int n) {
  int suma = 0;
  while (n != 0) {
    suma += n % 10;
    n /= 10;
  }
  return suma;
}

int Dibo(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return suma_cifre(Dibo(n - 1) + Dibo(n - 2));
  }
}

int gigelonacci(int n, int p, int q) {
  if (n == 0) {
    return p;
  } else if (n == 1) {
    return q;
  } else {
    return gigelonacci(n - 1, p, q) ^ gigelonacci(n - 2, p, q);
  }
}