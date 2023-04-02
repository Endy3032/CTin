#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

int main() {
	cin >> n;
	vector<ll> a(n), o;

	while (n--) cin >> a[n];
	sort(a.begin(), a.end(), greater());

	while (a.size() > 0) {
		o.push_back(a[0]);
		for (ll j = a.size() - 1; j > 0; j--) if (a[0] % a[j] == 0) a.erase(a.begin() + j);
		a.erase(a.begin());
	}

	sort(o.begin(), o.end());
	cout << o.size() << endl;
	for (auto i : o) cout << i << " ";
	cout << endl;
}
