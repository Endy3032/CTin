#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void prime(vector<bool> &v) {
	for (ll i = 2; i < v.size(); i++) {
		if (!v[i]) continue;
		for (ll j = i * i; j < v.size(); j += i) v[j] = 0;
	}
}

int sum(ll i) {
	int o = 0;
	while (i) o += i % 10, i /= 10;
	return o;
}

ll toPalindrome(ll i, ll x) {
	ll out = i * (x != -1 ? 10 : 1) + (x != -1 ? x : 0);
	while (i) {
		out = out * 10 + i % 10;
		i /= 10;
	}
	return out;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	ll l, r, c = 0;
	cin >> l >> r;

	vector<bool> p(110, 1);
	p[0] = p[1] = 0;
	prime(p);

	for (ll i = 1; i <= 100000; i++) {
		if (i < 10 && l <= i && i <= r && p[i]) c++;

		ll a = toPalindrome(i, -1);
		if (a > r) continue;
		if (l <= a && p[sum(a)]) c++;

		for (int j = 0; j < 10; j++) {
			a = toPalindrome(i, j);
			if (a > r) break;
			else if (a >= l && p[sum(a)]) c++;
		}
	}
	cout << c << endl;
}
