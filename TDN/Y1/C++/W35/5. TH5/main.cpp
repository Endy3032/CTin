#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, k, c = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;
	vector<ll> a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end(), greater<ll>());

	for (ll i = 0; i < n; i += k) c += 2 * (a[i] - 1);
	cout << c << endl;
}
