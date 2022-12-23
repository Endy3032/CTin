#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll l, r;

ll solve(ll x) {
	ll l, r = x % 10, a = x / 10;

	if (x < 10) return x;

	while (x >= 10) x /= 10;
	l = x;

	return (l <= r ? 9 : 8) + a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> l >> r;
	cout << solve(r) - solve(l - 1) << endl;
}