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
	while (n > 0) {
		if (!isPrime(n)) {
			cout << "FALSE" _el;
			return 0;
		}
		n /= 10;
	}
	cout << "TRUE" _el;
}
