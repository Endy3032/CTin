#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a, b;

bool isPrime(ll n) {
	if (n <= 7) return n > 1 && n != 4 && n != 6;
	if (n % 2 == 0 || n % 3 == 0) return false;

	ll rt = sqrt(n);
	for (ll i = 5; i <= rt; i += 6)
	if (n % i == 0 || n % (i + 2) == 0) return false;

	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	while (n--) {
		cin >> a >> b;
		if (a <= 2) cout << 2 << endl;
		// if (a <= 3) cout << 3 << endl;

		// ll i = (a == 5 || (a + 1) % 6 == 0) ? a : a + 6 - (a + 1) % 6;
		// cout << i << endl;
		// for (; i <= b; i += 6) {
		// 	if (isPrime(i)) cout << i << endl;
		// 	if (isPrime(i + 2) && i + 2 <= b) cout << i + 2 << endl;
		// }
		ll i = a % 2 == 0 ? a + 1 : a;
		for (i; i <= b; i += 2) if (isPrime(i)) cout << i << endl;
		cout << endl;
	}
}
