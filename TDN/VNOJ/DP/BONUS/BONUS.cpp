#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m, o = LLONG_MIN;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;
  ll a[n + 1][n + 1];

  for (ll y = 0; y <= n; y++) {
    for (ll x = 0; x <= n; x++) {
      if (x == 0 || y == 0) {
        a[y][x] = 0;
        continue;
      }
      cin >> a[y][x];
      a[y][x] += a[y - 1][x] + a[y][x - 1] - a[y - 1][x - 1];
      if (x >= m && y >= m) o = max(o, a[y][x] - a[y - m][x] - a[y][x - m] + a[y - m][x - m]);
    }
  }

  cout << o << endl;
}
