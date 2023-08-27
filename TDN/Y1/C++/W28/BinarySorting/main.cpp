#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> n;
		vector<ll> a(n);
		for (ll i = 0; i < n; i++) cin >> a[i];
		sort(a.begin(), a.end());
		for (auto i : a) cout << i << " ";
		cout << endl;
	}
}
