#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, q, l, r;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> q;
	ll a[n + 1];
	a[0] = 0;

	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
		a[i] += a[i - 1];
	}

	while (q--) {
		cin >> l >> r;
		cout << a[r] - a[l - 1] << "\n";
	}
}
