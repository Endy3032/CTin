#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, chk[13];

void solve(string s, ll a) {
	if (s.size() / 2 + 1 == n) {
		cout << s << endl;
		return;
	}

	for (ll i = 0; i < a; i++) {
		if (chk[i]) continue;
		chk[i] = 1;
		solve(s + (s.size() == 0 ? "" : " ") + char(i + '1'), a);
		chk[i] = 0;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (ll i = 1; i <= n; i++) solve("", i);
}
