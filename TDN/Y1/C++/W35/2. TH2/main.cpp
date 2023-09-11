#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll l, r, k, c = 0;
ll const mod = 998244353;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> l >> r >> k;
	for (ll i = l; i <= r; i++) {
		set<ll> d;
		ll i_ = i;
		while (i_ > 0) {
			d.insert(i_ % 10);
			i_ /= 10;
		}
		if (d.size() <= k) c += i;
	}

	cout << c << endl;
}
