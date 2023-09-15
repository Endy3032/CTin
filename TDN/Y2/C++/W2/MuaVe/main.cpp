#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, h, t;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> h >> t;
	vector<ll> ans(n);
	queue<pair<ll, ll>> q;

	for (ll i = 0; i < n; i++) {
		ll a; cin >> a;
		q.push({ a, i });
	}

	while (t-- && !q.empty()) {
		auto a = q.front();
		q.pop();
		if (a.first > h) q.push(a);
		ans[a.second]++;
	}

	for (auto i: ans) cout << i << " ";
	cout << endl;
}
