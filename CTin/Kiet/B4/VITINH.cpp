#include <bits/stdc++.h>
using namespace std;

ifstream inp("VITINH.inp");
ofstream out("VITINH.out");

typedef double ll;
ll n, c = 0, i = 1, digits = 1, lim = 10;

int main() {
	cin >> n;
	while (i <= n) {
		ll nums = min(lim - 1, n) - lim / 10 + 1;
		c += (min(lim - 1, n) + lim / 10) / 2 * nums;
		i += nums;
		digits = log10(i) + 1;
	}
	cout << c << endl;
	// for (ll i = 1; i <= n; i++) {
	// 	c += 1 + log10(i);
	// }
	// cout << c << endl;
}
