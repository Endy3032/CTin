#include <bits/stdc++.h>
using namespace std;

int can, need;

void solve() {
  int c, mn = need;
  for (int i = 0; i < can; i++) {
    cin >> c;
    if (need % c == 0) {
      mn = min(mn, need / c);
    }
  }
  cout << mn;
}

int main() {
  /**
   * 6 7
   * 1 2 3 4 5 6
  */
  freopen("WATER.inp", "r", stdin);
  // 7
  freopen("WATER.out", "w", stdout);
  cin >> can >> need;
  solve();
}
