#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	set<ll> f;
	ll s = sqrt(n);
	for (ll i = 1; i <= s; i++) {
		if (n % i == 0) {
			f.insert(i);
			f.insert(n / i);
		}
	}
	for (auto i: f) cout << i << endl;
}
