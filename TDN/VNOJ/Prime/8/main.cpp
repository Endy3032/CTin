#define _sp << " " <<
#define _el << "\n"
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

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
	ll i = 5, mx = n / 2;
	bool out = false;

	for (ll ii = 2; ii < 4; ii++) {
		if (isPrime(n - ii) && ii <= mx) {
			cout << ii _sp n - ii _el;
			out = true;
		}
	}

	while (true) {
		if (i > mx) break;
		if (isPrime(i) && isPrime(n - i)) {
			out = true;
			cout << i _sp n - i _el;
		}
		i += (i - 1) % 6 == 0 ? 4 : 2;
	}
	if (!out) cout << n _el;
}
