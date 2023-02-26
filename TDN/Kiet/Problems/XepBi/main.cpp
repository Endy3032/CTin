#include <bits/stdc++.h>
using namespace std;

int n, l = 1, o = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	vector<int> ns(n);
	vector<pair<int, int>> dp(n, {0, 0});

	dp[0] = {1, 0},	dp[1] = {1, 0};

	for (int i = 0; i < n; i++) cin >> ns[i];

	for (int x = 2; x < n; x++) {
		int ym = x;

		for (int y = x - 2; y >= 0; y--) if (ns[y] < ns[x] && dp[y].first > dp[ym].first) ym = y;

		dp[x] = {dp[ym].first + 1, ym};

		if (dp[x].first > l) {
			l = dp[x].first;
			o = x;
		}
	}

	vector<int> r(l);
	cout << l << endl;

	for (int i = 0; i < l; i++) {
		r[l - i - 1] = o + 1;
		o = dp[o].second;
	}

	for (auto i: r) cout << i << " ";
	cout << endl;
}
