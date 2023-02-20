#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, h, t, a, i;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> h >> t;
	vector<pair<ll, ll>> m;

	for (ll i = 0; i < n; i++) {
		cin >> a;
		m.push_back({a, 0});
	}

	a = 0;
	i = 0;
	while (a < t) {
		i = i % n;
		if (m[i].first < h) {
			if (m[i].second == 0) m[i].second++;
			else {
				i++;
				continue;
			}
		} else {
			m[i].second++;
		}
		a++;
		i++;
		// cout << i << " " << m[i].first << " " << m[i].second << endl;
	}

	for (auto i: m) cout << i.second << " ";
	cout << endl;
}
