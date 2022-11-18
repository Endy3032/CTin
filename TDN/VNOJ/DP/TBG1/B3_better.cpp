#include <bits/stdc++.h>
using namespace std;

#define wgt first
#define val second
typedef long long ll;
ll n, m, x, y, z;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;
  ll o[2][m + 1];
  vector<pair<ll, ll>> it;

  for (ll i = 0; i < 2; i++) o[i][0] = 0;
  for (ll i = 0; i <= m; i++) o[0][i] = 0;

  for (ll i = 0; i < n; i++) {
    cin >> x >> y >> z;
    auto t = make_pair(x, y);
    for (ll ii = 0; ii < z; ii++) it.push_back(t);
  }

  for (x = 0; x < it.size(); x++) {
    for (y = 1; y <= m; y++) {
      z = it[x].wgt <= y ? it[x].val + o[0][y - it[x].wgt] : 0;
      o[1][y] = max(o[0][y], z);
    }
    for (ll y = 1; y <= m; y++) o[0][y] = o[1][y];
  }

  cout << o[1][m] << endl;
}
