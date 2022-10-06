#include <bits/stdc++.h>
using namespace std;

#define maxN 1000
int n, k, grid[maxN][maxN];

void inp() {
  cin >> n >> k;
  for (int x = 0; x < n; x++) {
    for (int y = 0; y < n; y++) {
      cin >> grid[x][y];
    }
  }
}

void solve() {
  int mx = 0;
  int margin1 = (k - 1) / 2;
  int margin2 = k - margin1;
  for (int x = margin1; x <= margin2; x++) {
    for (int y = margin1; y <= margin2; y++) {
      int sum = grid[x][y];
      for (int a = 1; a <= margin1; a++) {
        sum += grid[x + a][y + a] + grid[x + a][y - a] + grid[x - a][y + a] + grid[x - a][y - a];
      }
      mx = max(mx, sum);
    }
  }
  cout << mx;
}

int main() {
  freopen("CHUX.inp", "r", stdin);
  freopen("CHUX.out", "w", stdout);
  inp();
  solve();
}
