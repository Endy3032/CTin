#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> n;
		vector<ll> ns(n);
		for (auto &i : ns) cin >> i;

		ll _gcd = ns[0];
		for (auto i : ns) _gcd = __gcd(_gcd, i);

		ll o = 0;

		for (ll i = 1; i <= sqrt(_gcd); i++) {
			if (_gcd % i == 0) o += (_gcd / i == i) ? 1 : 2;
		}

		cout << o << endl;
	}
}
