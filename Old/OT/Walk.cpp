#include <bits/stdc++.h>
using namespace std;

int main() {
  // 5 6
  freopen("WALK.inp", "r", stdin);
  // -1
  freopen("WALK.out", "w", stdout);
  int n, m;
  cin >> n >> m;

  int minSteps = (n - 1)/2 + 1;
  if (minSteps % m != 0) minSteps += m - (minSteps % m);
  int singleSteps = 2 * minSteps - n;
  if (singleSteps + 2*(n - minSteps) == n && minSteps <= n) cout << minSteps;
  else cout << -1;
}
