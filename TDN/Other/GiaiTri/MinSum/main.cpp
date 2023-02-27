#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a, b;

ll smallest(ll s, ll d) {
	if (d * 9 < s) return -1;
	vector<ll> dig(d);

	s--;
	for (ll i = d - 1; i > 0; i--) {
		if (s > 9) {
			dig[i] = 9;
			s -= 9;
		} else {
			dig[i] = s;
			s = 0;
		}
	}
	dig[0] = s + 1;

	stringstream ss;
	for (auto i : dig) ss << i;
	return stoi(ss.str());
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	while (n--) {
		cin >> a >> b;
		cout << smallest(a, b) << endl;
	}
}
