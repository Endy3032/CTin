#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("CORRECT.inp", "r", stdin);
  freopen("CORRECT.out", "w", stdout);
  int a, b, c, res;
  cin >> a >> b >> c;

  while (a < b) {
    if ((a + 2) % c == 0) a++;
    else a += 2;
    res++;
  }
  cout << res;
}
