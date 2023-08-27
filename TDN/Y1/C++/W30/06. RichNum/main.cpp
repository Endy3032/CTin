#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, x = 0;

ll factors(ll n) {
  ll x = 0, rt = sqrt(n);
  for (ll i = 1; i <= rt; i++) {
    if (n % i == 0) {
      x += i;
      if (n / i != i) x += n / i;
    }
  }
  return x - n;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	cout << (factors(n) > n ? 1 : 0) << endl;
}
