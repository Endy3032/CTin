#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n, k;

ll solve() {
	cin >> n >> k;
	vector<ll> a(n);
	for (auto &x : a) cin >> x;
	sort(a.begin(), a.end(), greater<ll>());

	ll s = 0, c = 0;
	for (auto i : a) {
		s += i, c++;
		if (s >= k) break;
	}
	if (s == k) return 0;

	s = (s < k ? s : s - a[c - 1]);
	priority_queue<ll> q;
	for (ll i = 0; i < (s < k ? c : c - 1); i++) q.push(a[i]);
	c = 0;
	while (s < k) {
		ll x = q.top(); q.pop();
		q.push(x + 1);
		s++, c++;
	}
	return c;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	while (t--) cout << solve() << endl;
}
