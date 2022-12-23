#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a, t, n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;
	while (t--) {
		map<ll, ll> m;

		cin >> n;
		while (n--) {
			cin >> a;
			for (ll i = 1; i <= a; i++) m[i]++;
		}

		ll o = 0;
		for (auto i : m) if (i.second >= i.first) o = i.first;
		cout << o << endl;
	}
}
