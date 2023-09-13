#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	vector<vector<int>> ns(n, vector<int>(n));
	vector<pair<ll, ll>> ans;

	for (ll y = 0; y < n; y++) {
		for (ll x = 0; x < n; x++) {
			cin >> ns[y][x];
		}
	}

	for (ll x = 1; x < n; x++) {
		for (ll y = 0; y < x; y++) {
			if (ns[y][x]) ans.push_back({ min(x, y) + 1, max(x, y) + 1 });
		}
	}

	cout << ans.size() << endl;
	for (auto p: ans) cout << p.first << " " << p.second << endl;
}
