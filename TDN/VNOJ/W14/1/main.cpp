#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, s, c = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> s;

	vector<ll> a(n + 1);
	a[0] = 0;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
		if (abs(a[i]) > s) c++;
		a[i] += a[i - 1];
	}

	for (ll l = 2; l <= n; l++) {
		for (ll i = l; i <= n; i++) {
			if (abs(a[i] - a[i - l]) > s) c++;
		}
	}
	cout << c << endl;
}
