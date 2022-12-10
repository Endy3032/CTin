#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, x;

vector<ll> getFactors(int n) {
  vector<ll> results;
  ll rt = sqrt(n);
  for (ll i = 1; i <= rt; i++) {
    if (n % i == 0) {
      results.push_back(i);
      if (n / i != i) results.push_back(n / i);
    }
  }

  return results;
}

ll sumVec(vector<ll> vec) {
	ll o = 0;
	for (auto i : vec) o += i;
	return o;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	while (n--) {
		ll c = 0;
		cin >> x;
		vector<ll> f = getFactors(x);
		for (auto y : f) {
			c += sumVec(getFactors(y));
		}
		cout << c << endl;
	}
}