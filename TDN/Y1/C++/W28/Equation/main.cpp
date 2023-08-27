#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a;

ll sum(ll i) {
	ll o = 0;
	while (i) {
		o += i % 10;
		i /= 10;
	}
	return o;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a;
	for (ll x = 0; x < min(a, ll(1e8)); x++) {
		if (sum(x) * x - a == 0) {
			cout << x << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}
