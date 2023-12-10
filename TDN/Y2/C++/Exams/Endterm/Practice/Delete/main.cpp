#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, c = 0, o = 0;
const ll mod = ll(1e9) + 7;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	vector<int> ns(n + 1, 0), dp(n + 1, 0);
	for (ll i = 1; i <= n; i++) {
		cin >> ns[i];
		dp[i] = dp[i - 1];

		if (ns[i] == 1) c++;
		else if (ns[i] == 2) dp[i] += dp[i - 1] + c;
		else o += dp[i];

		o %= mod, dp[i] %= mod;
	}

	cout << o << endl;
}
