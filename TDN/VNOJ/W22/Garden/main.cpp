#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n, k, d, o;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;

	while (t--) {
		cin >> n >> k;

		vector<ll> ns(k);
		for (int i = 0; i < k; i++) cin >> ns[i];

		sort(ns.begin(), ns.end());
		ns.insert(ns.begin(), 0);
		ns.push_back(n + 1);

		o = 0;

		for (int i = 0; i < ns.size() - 1; i++) {
			d = ns[i + 1] - ns[i] + 1;
			if (i == 0 || i == ns.size() - 2) o = max(o, d - 1);
			else if (d % 2 != 0) o = max(o, d / 2 + 1);
			else o = max(o, d / 2);
		}
		cout << o << endl;
	}
}
