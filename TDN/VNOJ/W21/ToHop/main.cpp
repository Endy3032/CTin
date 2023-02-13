#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, k, chk[31];

void solve(string s, ll a) {
	if (s.size() / 2 + 1 == k) {
		cout << s << endl;
		return;
	}

	for (ll i = a; i < n; i++) {
		if (chk[i]) continue;
		chk[i] = 1;
		solve(s + (s.size() == 0 ? "" : " ") + char(i + '1'), a);
		chk[i] = 0;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;
	for (ll i = 0; i <= n - k + 1; i++) solve("", i);
}
