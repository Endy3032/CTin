#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

ifstream inp("LCS.inp");
ofstream out("LCS.out");
#define cin inp
#define cout out

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	vector<ll> a(n), dp(n, 1);
	for (ll i = 0; i < n; i++) cin >> a[i];

	for (ll i = 1; i < n; i++) {
		for (ll j = 0; j < i; j++) {
			if (a[i] > a[j]) dp[i] = max(dp[i], dp[j] + 1);
		}
	}

	cout << dp[n - 1] << endl;
}
