#include <bits/stdc++.h>
using namespace std;

#define vol first
#define val second
typedef long long ll;
ll l, m = 0, n, x, y, z, r;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> l;
  vector<pair<ll, ll>> b;
  for (ll i = 0; i < n; i++) {
    cin >> x >> y >> z;
    m += z;
    for (ll i = 0; i < z; i++) b.push_back(make_pair(x, y));
  }

  ll a[m + 1][l + 1];
  for (ll i = 0; i <= m; i++) a[i][0] = 0;
  for (ll i = 0; i <= l; i++) a[0][i] = 0;

  for (ll itm = 1; itm <= m; itm++) {
    for (ll cap = 1; cap <= l; cap++) {
      x = itm - 1;
      y = 0;

      if (b[x].vol <= cap) {
        y = b[x].val;
        r = cap - b[x].vol;
        y += a[x][r];
      }

      a[itm][cap] = max(y, a[x][cap]);
    }
  }

  cout << a[m][l] << endl;
}
