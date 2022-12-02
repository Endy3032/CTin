#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m = 0, x, y;

struct task {
	ll s, e, ind;
};

bool cmpTask(task& t1, task& t2) {
	if (t1.e < t2.e) return true;
	else if (t1.e == t2.e) return t1.s < t2.s;
	else return false;
}

int main() {
	freopen("SComputer1.inp", "r", stdin);
	freopen("SComputer1.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	vector<ll> o;
	vector<task> a(n);

	for (ll i = 0; i < n; i++) {
		cin >> a[i].s >> a[i].e;
		a[i].ind = i;
	}

	sort(a.begin(), a.end(), cmpTask);

	for (ll i = 0; i < n; i++) {
		if (a[i].s >= m) {
			m = a[i].e;
			o.push_back(a[i].ind);
		}
	}

	cout << o.size() << endl;
	for (auto i : o) cout << i + 1 << " ";
	cout << endl;
}
