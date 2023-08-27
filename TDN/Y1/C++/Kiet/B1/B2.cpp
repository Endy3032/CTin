#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, x, y;
map<ll, set<ll>> m;

int solve() {
	for (auto i: m) {
		set<ll> s = i.second;
		for (ll j: s) {
			m[j].insert(i.first);
			for (ll k: m[i.first]) m[j].insert(k);
		}
  }

	for (auto i: m) if (i.second.size() != n) return 0;
	return 1;
}

int main() {
  cin >> n;

  while (cin >> x >> y) {
		m[x].insert(y);
		m[y].insert(x);
  }

	cout << solve() << endl;
}
