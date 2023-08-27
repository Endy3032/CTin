#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n, m;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> n >> m;
		ll d = n - m, mn = 0, mx = 0;

		vector<ll> ns(n);
		for (ll i = 0; i < n; i++) cin >> ns[i];
		sort(ns.begin(), ns.end());

		for (ll i = 0; i < n - d; i++) mn += ns[i];
		for (ll i = d; i < n; i++) mx += ns[i];

		cout << mx - mn << endl;
	}
}
