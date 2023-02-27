#include <bits/stdc++.h>
using namespace std;

long long n;

int main() {
  cin >> n;
  while (n >= 1) {
    cout << n << " ";
    if (n == 1) break;
    n = n % 2 == 0 ? n / 2 : n * 3 + 1;
  }
}