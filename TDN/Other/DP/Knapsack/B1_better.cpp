#include <bits/stdc++.h>
using namespace std;

#define val first
#define wgt second
typedef long long ll;
ll n, m, x, y, r;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	ll a[2][m + 1];
	pair<ll, ll> b[n];

	for (ll i = 0; i < 2; i++) a[i][0] = 0;
	for (ll i = 0; i <= m; i++) a[0][i] = 0;

	for (ll i = 0; i < n; i++) {
		cin >> x >> y;
		b[i] = make_pair(x, y);
	}

	for (x = 0; x < n; x++) {
		for (ll cap = 1; cap <= m; cap++) {
			y = b[x].wgt <= cap ? b[x].val + a[0][cap - b[x].wgt] : 0;
			a[1][cap] = max(a[0][cap], y);
		}
		for (ll cap = 1; cap <= m; cap++) a[0][cap] = a[1][cap];
	}

	cout << a[1][m] << endl;
}
