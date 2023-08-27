#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, x = LLONG_MAX, y = LLONG_MIN;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	vector<pair<ll, ll>> a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
		x = min(x, a[i].first);
		y = max(y, a[i].second);
	}
	for (ll i = 0; i < n; i++) {
		if (a[i].first == x && a[i].second == y) {
			cout << i + 1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}
