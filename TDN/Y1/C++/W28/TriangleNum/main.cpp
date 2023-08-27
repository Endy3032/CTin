#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, mx = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	vector<ll> ns(n);
	for (ll i = 0; i < n; i++) {
		cin >> ns[i];
		mx = max(mx, ns[i]);
	}

	set<ll> m;
	for (ll i = 1; i * (i + 1) / 2 < mx; i++) m.insert(i * (i + 1) / 2);

	for (auto a: ns) {
		bool o = false;
		for (auto b: m) {
			if (m.find(a - b) != m.end()) {
				o = true;
				break;
			}
		}
		cout << (o ? "YES" : "NO") << endl;
	}
}
