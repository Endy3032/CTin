#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

ll solve(ll n) {
	ll o = 0, tn = 10;
	ll mx = log10(n) == ceil(log10(n)) ? log10(n) + 1 : ceil(log10(n));

	for (ll i = 1; i <= mx; i++) {
		o += min(n - tn / 10 + 1, tn - tn / 10) * i;
		tn *= 10;
	}

	return o;
}

int main() {
	cin >> n;
	cout << solve(n) << endl;
}
