#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n, x, y;

struct student {
	ll id, i, o;
};

bool cmp(student a, student b) {
	return (a.i < b.i) ? true : (a.i == b.i) ? (a.id < b.id) : false;
}

void solve() {
	cin >> n;
	vector<student> a(n);
	vector<ll> o(n);

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		a[i].id = i;
		a[i].i = x;
		a[i].o = y;
	}

	sort(a.begin(), a.end(), cmp);

	queue<student> q;
	for (student i: a) q.push(i);

	x = 1;
	while (!q.empty()) {
		student i = q.front();
		q.pop();

		if (i.o < x) {
			o[i.id] = 0;
			continue;
		}
		o[i.id] = x;
		x++;
	}

	for (ll i: o) cout << i << " ";
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;
	while (t--) solve();
}
