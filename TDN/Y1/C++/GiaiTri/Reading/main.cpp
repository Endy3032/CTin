#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a, b;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (ll x = 0; x < n; x++) {
		cin >> a >> b;
		ll c = 0;
		for (ll y = b; y <= a; y += b) c += y % 10;
		cout << c << endl;
	}
}
