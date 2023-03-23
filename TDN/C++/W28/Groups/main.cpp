#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> n;
		vector<ll> ns(n);
		for (ll i = 0; i < n; i++) cin >> ns[i];
		sort(ns.begin(), ns.end());
		ll c = 0;
		while (!ns.empty()) {
			ll x = ns.front(), i = 0;
			ns.erase(ns.begin());
			while (i < ns.size()) {
				if (ns[i] - x > 1) {
					x = ns[i];
					ns.erase(ns.begin() + i);
				} else i++;
			}
			c++;
		}
		cout << c << endl;
	}
}
