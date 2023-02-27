#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n, m;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> n;
		ll a[n];
		vector<ll> b;

		for (ll i = 0; i < n; i++) cin >> a[i];
		for (ll i = 0; i < n; i++) {
			cin >> m;
			a[i] = m - a[i];

			if (b.size() == 0 || a[i] != b.back()) b.push_back(a[i]);
		}

		bool o = b.size() < 2;
		if (b.size() == 2) o = b[0] == 0 || b[1] == 0;
		if (b.size() == 3) o = b[0] == 0 && b[2] == 0;

		cout << (o ? "YES" : "NO") << endl;
	}
}
