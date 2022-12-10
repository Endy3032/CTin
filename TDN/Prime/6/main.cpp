#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, s;

ll sum(ll n) {
	ll o = 0;
	while (n > 0) {
		o += n % 10;
		n /= 10;
	}
	return o;
}

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

	cin >> n >> s;
	if (n > 2 && s == 2) cout << 2 << endl;
	if (n > 3 && s == 3) cout << 3 << endl;
	for (ll i = 5; i <= n; i += 6) {
		if (isPrime(i) && sum(i) == s) cout << i << endl;
		if (i + 2 <= n && isPrime(i + 2) && sum(i + 2) == s) cout << i + 2 << endl;
	}
}
