#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a, b, m, mx = 0;

int sumDigits(ll i) {
	int o = 0;
	while (i) o += i % 10, i /= 10;
	return o;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b;
	m = __gcd(a, b);

	for (ll i = 1; i <= sqrt(m); i++) {
		if (a % i == 0 && b % i == 0) {
			mx = max(mx, max(ll(sumDigits(i)), ll(sumDigits(m / i))));
		}
	}
	cout << mx << endl;
}
