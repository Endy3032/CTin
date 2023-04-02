#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, o = 0;

int main() {
	cin >> n;
	ll a[n + 1][n + 1];
	for (ll y = 0; y <= n; y++) {
		for (ll x = 0; x <= n; x++) {
			if (!y || !x) {
				a[y][x] = 0;
				continue;
			}

			cin >> a[y][x];
			if (a[y][x] == 1 && a[y - 1][x] != 1 && a[y][x - 1] != 1) o++;
		}
	}
	cout << o << endl;
}
