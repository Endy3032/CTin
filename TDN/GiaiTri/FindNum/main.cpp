#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<ll> p = { 2, 3 };
ll n, a, b;

bool isPrime(ll n) {
  if (n <= 7) return n > 1 && n != 4 && n != 6;
  if (n % 2 == 0 || n % 3 == 0) return false;

  ll rt = sqrt(n);
  for (ll i = 5; i <= rt; i += 6)
    if (n % i == 0 || n % (i + 2) == 0) return false;

  return true;
}

void genPrime() {
	for (ll i = 5; i <= 5e4; i += 6) {
		if (isPrime(i)) p.push_back(i);
		if (isPrime(i + 2)) p.push_back(i + 2);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	genPrime();
	while (n--) {
		cin >> a >> b;
		ll s = a + b;
		for (auto i: p) {
			if (i > s) {
				cout << (i - s) << endl;
				break;
			}
		}
	}
}
