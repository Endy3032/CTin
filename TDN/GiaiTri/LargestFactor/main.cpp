#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a;

vector<ll> getFactors(ll n) {
  vector<ll> results;
  ll rt = sqrt(n);
  for (ll i = 1; i <= rt; i++) {
    if (n % i == 0) {
      results.push_back(i);
      if (n / i != i) {
        results.push_back(n / i);
      }
    }
  }
	sort(results.begin(), results.end());

  return results;
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

	cin >> n;
	while (n--) {
		cin >> a;
		vector<ll> b = getFactors(a);
		for (ll i = b.size() - 1; i >= 0; i--) {
			if (isPrime(b[i])) {
				cout << b[i] << endl;
				break;
			}
		}
	}
}
