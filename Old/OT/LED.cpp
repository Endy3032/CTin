#include <bits/stdc++.h>
using namespace std;

int main() {
  // 7
  freopen("LED.inp", "r", stdin);
  freopen("LED.out", "w", stdout);
  int n, res;
  cin >> n;
  res = (n/3)*7;
  if (n % 3 == 1) {
    res -= 3;
  } else if (n % 3 == 2) {
    res += 1;
  }
  cout << res;
}
