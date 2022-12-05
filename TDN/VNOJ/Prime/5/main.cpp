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
	if (n < 4) {
		cout << n << endl;
		return 0;
	} else if (n == 4) {
		cout << 3 << endl;
		return 0;
	}

	ll i = n - (n + 1) % 6;
	for (; i > 1; i -= 6) {
		ll o = 0;
		if (isPrime(i)) o = i;
		if (i + 2 <= n && isPrime(i + 2)) o = i + 2;
		if (o != 0) {
			cout << o << endl;
			break;
		}
	}
}
