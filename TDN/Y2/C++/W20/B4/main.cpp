#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll h, w, x = 0, y = 0;
bool flag = false;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> h >> w;
	vector<ll> ns(h * w);
	vector<vector<ll>> grid(h, vector<ll>(w));

	for (auto &i : ns) cin >> i;
	sort(ns.begin(), ns.end());

	ll x = 0, y = 0;
	for (ll i = 0; i < h * w; i++) {
		grid[y][x] = ns[i];
		x += flag ? -1 : 1;
		if (flag && x == -1 || !flag && x == w) {
			y++, x = flag ? 0 : w - 1, flag = !flag;
		}
	}

	for (auto i : grid) {
		for (auto j : i) cout << j << " ";
		cout << endl;
	}
}
