#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void prime(vector<bool> &v) {
	for (ll i = 2; i < v.size(); i++) {
		if (!v[i]) continue;
		for (ll j = i * i; j < v.size(); j += i) v[j] = 0;
	}
}

ll power10(ll x) {
	if (x == 0) return 1;
	ll o = 10;
	for (ll i = 1; i < x; i++) o *= 10;
	return o;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	ll k, a, b, o = 0;
	cin >> k >> a >> b;

	vector<bool> v(b + 1, 1);
	v[0] = 0, v[1] = 0;
	prime(v);

	ll s = max(a, power10(k - 1)), e = min(b, power10(k) - 1);
	for (ll i = s; i <= e; i++) if (v[i]) o++;
	cout << o << endl;
}