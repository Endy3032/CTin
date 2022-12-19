#include <bits/stdc++.h>
using namespace std;

ifstream inp("th.inp");
ofstream out("th.out");
int m, n, k;

int main() {
  // 100 78 43
  inp >> m >> n >> k;
  if (m > n * 2) {
    int sub = min(m - n * 2, k);
    m -= sub;
    k -= sub;
  } else if (n > m / 2) {
    int sub = min(n - m / 2, k);
    n -= sub;
    k -= sub;
  }
  int sub = (k - (k % 3)) / 3;
  n -= sub;
  k -= sub;
  m -= k;
  out << min(m / 2, n);
}