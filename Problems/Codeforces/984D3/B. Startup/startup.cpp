#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, shlv, bttl, brn, cst, a, b;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> shlv >> bttl;
		map<ll, ll> m;
		vector<int> ns;

		while (bttl--) {
			cin >> a >> b;
			if (m[a]) m[a] += b;
			else m[a] = b;
		}

		for (auto i: m) ns.push_back(i.second);
		sort(ns.begin(), ns.end(), greater<int>());

		ll ans = 0;
		for (int i = 0; i < min(shlv, ll(ns.size())); i++) ans += ns[i];
		cout << ans << endl;
	}
}
