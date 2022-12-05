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
	ll rt = sqrt(n);

	if (isPrime(rt) && rt * rt == n) cout << n;
	else if (n <= 4) cout << 4;
	else if (n <= 9) cout << 9;
	else {
		ll i = ((rt + 1) % 6 == 0) ? rt : rt + 6 - (rt + 1) % 6;
		while (true) {
			if (isPrime(i) && i * i >= n) {
				cout << i * i;
				return 0;
			}
			i += (i - 1) % 6 == 0 ? 4 : 2;
		}
	}
	cout << endl;
}
