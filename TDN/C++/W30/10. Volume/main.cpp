#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

ll solve(ll a, ll b) {
	ll x = 0, r;
	if (a > b) swap(a, b);
	for (ll i: { 5, 2, 1 }) {
		if (a == b) return x;
		r = (b - a) / i;
		x += r;
		a += i * r;
	}
	return x;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	while (n--) {
		ll a, b;
		cin >> a >> b;
		cout << solve(a, b) << endl;
	}
}
