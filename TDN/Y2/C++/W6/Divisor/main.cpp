#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a, o = 1;

void primeFactors(map<ll, ll> &m, ll x) {
	while (x % 2 == 0) {
		m[2]++;
		x /= 2;
	}

	for (ll i = 3; i <= sqrt(x); i += 2) {
		while (x % i == 0) {
			m[i]++;
			x /= i;
		}
	}

	if (x > 2) m[x]++;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	map<ll, ll> m;

	for (ll i = 0; i < n; i++) {
		cin >> a;
		primeFactors(m, a);
	}

	for (auto i: m) {
		o *= (i.second + 1);
		o %= ll(1e9) + 7;
	}
	cout << o << endl;
}
