#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a, b;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	vector<pair<ll, ll>> dta;

	for (ll i = 0; i < n; i++) {
		cin >> a >> b;
		dta.push_back(make_pair(a, 1));
		dta.push_back(make_pair(b, -1));
	}
	sort(dta.begin(), dta.end());

	a = 0; b = 0;
	for (ll i = 0; i < dta.size(); i++) {
		a += dta[i].second;
		b = max(a, b);
		cout << dta[i].first << " " << dta[i].second << " " << a << " " << b << endl;
	}
	cout << b << endl;
}
