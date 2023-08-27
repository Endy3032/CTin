#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m;

int solve() {
	if (m % n == 0) return (m / n - 1) * n;
	else if (n % m == 0) return 0;

	ll mul = lcm(n, m), n1 = mul / m, m1 = mul / n, s = 0, o = 0;

	cout << m1 << " " << n1 << endl;

	for (ll i = 1; i <= m; i++) {
		while (s < n1) s += m1;
		if (s == n1) s = 0;
		else {
			o++;
			s -= n1;
		}
	}
	return o;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	cout << solve() << endl;
}
