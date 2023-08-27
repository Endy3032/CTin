#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a, b, c, d, e, f;

ll solve() {
	vector<ll> v;
	for (ll i = 0; i < a; i++) v.push_back(1);
	for (ll i = 0; i < b; i++) v.push_back(2 * 2);
	for (ll i = 0; i < c; i++) v.push_back(3 * 3);
	for (ll i = 0; i < d; i++) v.push_back(4 * 4);
	for (ll i = 0; i < e; i++) v.push_back(5 * 5);

	ll ans = f, sum = 0, l = 0, r = v.size() - 1;
	while (l <= r) {
		sum = v[r];
		while (sum + v[l] < 36) sum += v[l], l++;
		ans++, r--;
	}

	return ans;
}

int main() {
	while (cin >> a >> b >> c >> d >> e >> f) {
		if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0) break;
		cout << solve() << endl;
	}
}
