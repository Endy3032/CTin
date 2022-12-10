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

ll binpow(ll a, ll b) {
  if (b == 0) return 1;
  ll r = binpow(a, b / 2);
  if (b % 2) return r * r * a;
  else return r * r;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;
	while (n > 0) {
		if (!isPrime(n)) {
			cout << "NO" _el;
			return 0;
		}
		n = n % binpow(10, ll(log10(n)));
	}
  cout << "YES" _el;
}
