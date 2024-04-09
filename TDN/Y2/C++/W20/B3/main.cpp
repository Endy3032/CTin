#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
ll w, h, t, x, y;

ll solve(ll x, ll y) {
	ll i = 0;
	if (w % 2) {
		if (y % 2) {
			if (x % 2) i = (y - 1) * w / 2 + (x + 1) / 2;
			else i = (ceil(double(max(h, w)) / 2.0 * double(min(h, w)))) + (y - 1) * w / 2 + (x / 2);
		} else {
			if (x % 2) i = (ceil(double(max(h, w)) / 2.0 * double(min(h, w)))) + (y - 2) * w / 2 + (w - 1) / 2 + (x + 1) / 2;
			else i = (y - 2) * w + (w + 1) / 2 + (x / 2);
		}
	} else {
		if (x % 2) i = (y - 1) * (w / 2) + (x + 1) / 2;
		else i = (h + y - 1) * (w / 2) + (x + 1) / 2;
	}
	return i;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> h >> w >> t;
	while (t--) {
		cin >> y >> x;
		cout << solve(x, y) << " ";
	}
}
