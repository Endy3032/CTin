#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a, s;

int add(ll x) {
	if (x % 10 != 0) return 1;

	ll o = 1, c = 10;
	for (int i = 1; i <= 8; i++) {
		o += (x % c == 0 ? -9 : 0);
		c *= 10;
	}
	return o;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a;
	for (ll x = 1; x < min(a, ll(1e8)); x++) {
		s += add(x);
		if (s * x == a) {
			cout << x << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}