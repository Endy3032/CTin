#include <bits/stdc++.h>
using namespace std;

ifstream inp("DP_A9.inp");
ofstream out("DP_A9.out");
// #define cin inp
// #define cout out

typedef long long ll;
ll w, h, m;

int main() {
	cin >> h >> w;

	ll a[h + 1][w + 1];
	for (ll y = 0; y <= h; y++) {
		for (ll x = 0; x <= w; x++) {
			if (y == 0 || x == 0) a[y][x] = 0;
			else {
				cin >> m;
				a[y][x] = a[y - 1][x] + a[y][x - 1] + m - a[y - 1][x - 1];
			}
		}
	}

	ll n, x1, y1, x2, y2;
	cin >> n;
	while (n--) {
		cin >> y1 >> x1 >> y2 >> x2;
		cout << a[y2][x2] - a[y1 - 1][x2] - a[y2][x1 - 1] + a[y1 - 1][x1 - 1] << endl;
	}
}
