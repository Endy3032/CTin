#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, c = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	vector<pair<ll, ll>> ns(n);
	for (auto &a : ns) cin >> a.first >> a.second;
	sort(ns.begin(), ns.end());

	pair<ll, ll> o = { ns[0].first, ns[0].second };
	for (auto &a : ns) {
		if (a.first <= o.second && a.second > o.second) o.second = a.second;
		else if (a.first > o.second && a.second > o.second) o = a;
		c = max(c, o.second - o.first);
	}

	cout << c << endl;
}
