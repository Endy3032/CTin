#define _sp << " "
#define _el << "\n"
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll l, r;
bool pr[10000001];

void sieve(ll n) {
	pr[0], pr[1] = 0, 0;
	ll rt = sqrt(n);
	for (ll i = 2; i <= rt; i++) {
		if (pr[i]) {
			for (ll j = i * i; j <= n; j += i) pr[j] = 0;
		}
	}
}

bool isSprime(ll n) {
	while (n > 0) {
		if (n < 2) return false;
		if (pr[n] == 0) return false;
		n /= 10;
	}
	return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> l >> r;
	memset(pr, 1, sizeof(pr));
	sieve(r);

	if (l < 3) cout << 2 _sp << 3 _sp;
	else if (l == 3) cout << 3 _sp;

	ll i = ((l + 1) % 6 == 0) ? l : l + 6 - (l + 1) % 6;
	if (i != l && l > 3 && pr[l]) cout << l _sp;
	for (; i <= r; i += 6) {
		if (isSprime(i)) cout << i _sp;
		if (isSprime(i + 2)) cout << i + 2 _sp;
	}
}
