#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	vector<vector<ll>> ns(n, vector<ll>(n));
	vector<set<ll>> ans(n);

	for (ll y = 0; y < n; y++) {
		for (ll x = 0; x < n; x++) {
			cin >> ns[y][x];
			if (!ns[y][x]) continue;

			ans[y].insert(x);
			ans[x].insert(y);
		}
	}

	for (ll i = 0; i < n; i++) {
		cout << i + 1 << ":";
		for (auto j: ans[i]) cout << " " << j + 1;
		cout << endl;
	}
}
