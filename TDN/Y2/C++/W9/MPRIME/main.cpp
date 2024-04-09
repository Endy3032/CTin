#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m, mn = LLONG_MAX;

void prime(vector<ll> &v) {
	v[0] = 0, v[1] = 0;
	for (ll i = 2; i < v.size(); i++) {
		if (!v[i]) continue;
		for (ll j = i * i; j < v.size(); j += i) v[j] = 0;
	}
	for (ll i = v.size() - 1; i >= 0; i--) {
		if (v[i]) v[i] = 0;
		else v[i] = v[i + 1] + 1;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	vector<vector<ll>> ns(n, vector<ll>(m, 0)), count(2, vector<ll>(max(n, m), 0));

	vector<ll> primes(1e6 + 4, 1);
	prime(primes);

	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			cin >> ns[i][j];
			count[0][i] += primes[ns[i][j]];
			count[1][j] += primes[ns[i][j]];
		}
	}

	for (ll i = 0; i < n; i++) mn = min(mn, count[0][i]);
	for (ll j = 0; j < m; j++) mn = min(mn, count[1][j]);
	cout << mn << endl;
}
