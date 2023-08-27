#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, y, o = 0;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;
  vector<ll> a(n), b(n);
  for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

	y = 0;
	while (y < b.size()) {
		ll x = a.size() - 1, found = 0;
		while (x >= 0) {
			if (a[x] < b[y]) {
				o += 2, found = 1;
				a.erase(a.begin() + x);
				b.erase(b.begin() + y);
				break;
			} x--;
		}
		if (!found) y++;
	}

	y = 0;
	while (y < b.size()) {
		ll x = a.size() - 1, found = 0;
		while (x >= 0) {
			if (a[x] == b[y]) {
				o++, found = 1;
				a.erase(a.begin() + x);
				b.erase(b.begin() + y);
				break;
			} x--;
		}
		if (!found) y++;
	}

  cout << o << endl;
}
