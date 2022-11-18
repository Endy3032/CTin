#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, k, m = LLONG_MIN;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> k;
	ll a[n + 1][n + 1];

	for (ll y = 0; y <= n; y++) {
		for (ll x = 0; x <= n; x++) {
			if (x == 0 || y == 0) {
				a[y][x] = 0;
				continue;
			}
			cin >> a[y][x];
			a[y][x] += a[y - 1][x] + a[y][x - 1] - a[y - 1][x - 1];
		}
	}

	for (ll y = k; y <= n; y++) {
		for (ll x = k; x <= n; x++) {
			m = max(m, a[y][x] - a[y - k][x] - a[y][x - k] + a[y - k][x - k]);
		}
	}
	cout << m << endl;
}
