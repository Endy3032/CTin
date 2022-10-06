#include <bits/stdc++.h>
using namespace std;

ifstream inp("FIND.inp");
ofstream out("FIND.out");
long long m, n, k, sum, num, r = 0;

bool isPrime(long long a) {
  if (a == 2 || a == 3) return true;
  else if (a < 2 || a % 2 == 0 || a % 3 == 0) return false;
  long long rt = sqrt(a);
  for (long long i = 5; i < rt; i += 6) {
    if (a % i == 0 || a % (i + 2) == 0) return false;
  }
  return true;
}

int main() {
  inp >> m >> n >> k;
  for (long long i = m + 1; i < n; i++) {
    if (!isPrime(i)) continue;
    sum = 0; num = i;
    while (num > 0) {
      sum += num % 10;
      num /= 10;
    }
    if (sum % k == 0) r++;
  }
  out << r;
}
