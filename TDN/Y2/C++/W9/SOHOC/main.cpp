#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m, k, mp = 1, mq = 1;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> k;
	vector<ll> p(n), q(m);

	for (ll i = 0; i < n; i++) {
		cin >> p[i];
		mp *= p[i];
	}

	for (ll i = 0; i < m; i++) {
		cin >> q[i];
		mq *= q[i];
	}

	if (max(mp, mq) % min(mp, mq) != 0) {
		cout << 0 << endl;
		return 0;
	}
}
