#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	ll a[n], b[n - 1];

	for (ll i = 0; i < n; i++) cin >> a[i];
	for (ll i = 0; i < n - 1; i++) cin >> b[i];
	ll o[n] = { a[0], min(a[0] + a[1], b[0]) };
	for (ll i = 2; i < n; i++) o[i] = min(o[i - 1] + a[i], o[i - 2] + b[i - 1]);
	cout << o[n - 1] << endl;
}
