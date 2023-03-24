#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n;

int solve() {
  cin >> n;

  vector<ll> ns(n);
  for (ll i = 0; i < n; i++) cin >> ns[i];
  sort(ns.begin(), ns.end());

  for (ll i = 1; i < n; i++) if (ns[i] - ns[i - 1] == 1) return 2;
  return 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;
	while (t--) cout << solve() << endl;
}
