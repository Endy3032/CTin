#include <bits/stdc++.h>
using namespace std;

#define val first
#define vol second
typedef long long ll;
ll n, l, x, y, r;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> l;
	ll a[n + 1][l + 1];
	pair<ll, ll> b[n];

	for (ll i = 0; i <= n; i++) a[i][0] = 0;
	for (ll i = 0; i <= l; i++) a[0][i] = 0;

	for (ll i = 0; i < n; i++) {
		cin >> x >> y;
		b[i] = make_pair(x, y);
	}

	for (ll itm = 1; itm <= n; itm++) {
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

	cout << a[n][l] << endl;
}
