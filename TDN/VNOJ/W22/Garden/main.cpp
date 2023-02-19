#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n, k, a, b, d;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> n >> k;

		vector<ll> ns(k);
		for (int i = 0; i < k; i++) cin >> ns[i];

		// cout << n << " " << k << endl;
		// for (auto i: ns) cout << i << " ";
		// cout << "\n\n";

		sort(ns.begin(), ns.end());
		if (ns[k - 1] != n) ns.push_back(n + 1);

		d = 0;
		a = ns[0] == 1;

		for (int i = 0; i < ns.size(); i++) {
			b = ns[i];
			ll aaa = (i != 0 && ns[i] != n + 1 ? abs(b - a) / 2 + 1 : abs(b - a));
			d = max(d, aaa);
			// cout << a << " " << b << " - " << aaa << endl;
			swap(a, b);
		}
		// cout << d << "\n-----\n";
		cout << d << endl;
	}
}
