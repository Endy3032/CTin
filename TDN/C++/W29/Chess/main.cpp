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
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	n = a.size(), o = 0;
	while (o < n) {
		if (a[n - 1 - o] > b[n - 1 - o]) {
			b.erase(b.begin() + n - o - 1);
			a.erase(a.begin() + o);
		} else if (a[o] <= b[o]) {
			break;
		} else {
			o--;
		}
	}

	n = b.size(), o = 0;
	while (o < n) {
		if (b[o] < a[o]) {
			b.erase(b.begin() + o);
			a.erase(a.begin() + n - o - 1);
		} else if (b[o] >= a[o]) {
			break;
		} else {
			o++;
		}
	}

	o = 0;
	for (ll i = 0; i < a.size(); i++) {
		if (b[i] == a[i]) o++;
		else if (b[i] > a[i]) o += 2;
	}

	cout << o << endl;
}
