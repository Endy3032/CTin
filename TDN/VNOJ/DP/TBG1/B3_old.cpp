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
  vector<pair<ll, ll>> it;
  ll o[m + 1];

  for (ll i = 0; i < n; i++) {
    cin >> x >> y >> z;
    auto t = make_pair(x, y);
    for (ll ii = 0; ii < z; ii++) it.push_back(t);
  }

  for (ll i = 0; i <= m; i++) o[i] = 0;

  for (x = 0; x < n; x++) {
    for (y = m; y >= it[x].wgt; y--) {
      o[y] = max(o[y], o[y - it[x].wgt] + it[x].val);
		}
	}

  cout << o[m] << endl;
}

// ll n, l, x, y;

// int main() {
// 	cin >> n >> l;
// 	ll a[2][l + 1];
// 	pair<ll, ll> b[n];

// 	for (ll i = 0; i < 2; i++) a[i][0] = 0;
// 	for (ll i = 0; i <= l; i++) a[0][i] = 0;

// 	for (ll i = 0; i < n; i++) {
// 		cin >> x >> y;
// 		b[i] = make_pair(x, y);
// 	}

// 	for (ll itm = 1; itm <= n; itm++) {
// 		for (ll cap = 1; cap <= l; cap++) {
// 			x = itm - 1;
// 			y = b[x].vol <= cap ? b[x].val + a[0][cap - b[x].vol] : 0;
// 			a[1][cap] = max(a[0][cap], y);
// 		}
// 		for (ll cap = 1; cap <= l; cap++) a[0][cap] = a[1][cap];
// 	}

// 	cout << a[1][l] << endl;
// }
