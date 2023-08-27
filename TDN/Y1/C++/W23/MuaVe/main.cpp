#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, h, t, a;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> h >> t;

	queue<pair<ll, ll>> q;
	vector<ll> o(n);

	for (ll i = 0; i < n; i++) {
		cin >> a;
		q.push({a, i});
	}

	while (t-- && !q.empty()) {
		auto i = q.front();
		if (i.first > h) q.push(i);
		q.pop();
		o[i.second]++;
	}

	for (auto i: o) cout << i << " ";
	cout << endl;
}
