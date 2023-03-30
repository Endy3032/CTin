#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, o = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	vector<ll> a(n), b(n);
	for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
	sort(a.begin(), a.end(), greater());
	sort(b.begin(), b.end(), greater());

	ll x = 0, y = 0;
	while (x < a.size() && y < b.size()) {
		if (b[y] > a[x]) {
			b.erase(b.begin() + y);
			a.erase(a.begin() + x);
			o += 2;
		} else if (b[y] == a[x]) {
			x++;
			y++;
			o++;
		} else {
			x++;
		}
	}

	cout << o << endl;
}
