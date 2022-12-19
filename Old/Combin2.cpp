#include <bits/stdc++.h>
using namespace std;

ifstream inp("COMBIN.INP");
ofstream out("COMBIN.OUT");
int n, k, m;

long long factorial(long long n) {
  if (n == 0 || n == 1) return 1;
  return n * factorial(n - 1);
}

bool invalid(int n, int k, int m) {
  if (n < k) return true;
  long long nf = factorial(n);
  cout << nf << endl;
  long long kf = factorial(k);
  cout << kf << endl;
  long long nkf = factorial(n - k);
  cout << nkf << endl;
  if (nf / (kf * nkf) < m) return true;
  return false;
}

int main() {
  cin >> n >> k >> m;
  cout << "hi";
  if (invalid(n, k, m)) {
    cout << "-1";
    return 1;
  }
  cout << ":)";
}
