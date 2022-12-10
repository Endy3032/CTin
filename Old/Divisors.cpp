#include <bits/stdc++.h>
using namespace std;

ifstream inp("divisors.inp");
ofstream out("divisors.out");
long long n, c1 = 0, c2 = 0;

bool isPrime(long long n) {
  if (n <= 7) return n > 1 && n != 4 && n != 6;
  if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) return false;

  long long rt = sqrt(n);

  for (long long i = 11; i < rt; i += 6) if (n % i == 0 || n % (i + 2) == 0) return false;
  return true;
}

bool isMagic(long long n) {
  long long c = 0, rt = sqrt(n);

  if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0) {
    for (int i = 2; i < 6; i++) {
      if (i == 4) continue;
      if (n % i == 0 && isPrime(n / i) && n / i != i || n == pow(i, 3)) return true;
    }
  } else {
    for (long long i = 1; i <= rt; i++) {
      if (n % i == 0) {
        c++;
        if (n / i != i) c++;
        if (c > 4) return false;
      }
    }
  }

  return c == 4;
}

bool isMagicRaw(long long n) {
  long long c = 0, rt = sqrt(n);

  for (long long i = 1; i <= rt; i++) {
    if (n % i == 0) {
      c++;
      if (n / i != i) c++;
      if (c > 4) return false;
    }
  }

  return c == 4;
}

int main() {
  // 1000
  inp >> n;
  for (long long i = 6; i <= n; i++) {
    if (isMagic(i)) c1++;
    if (isMagicRaw(i)) c2++;
    if (isMagic(i) != isMagicRaw(i)) cout << i << " " << isMagic(i) << isMagicRaw(i) << endl;
  }
  // 302 292
  out << c1 << " " << c2;
}