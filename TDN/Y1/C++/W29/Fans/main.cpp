#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n;

bool cmp(pair<ll, string> a, pair<ll, string> b) {
	return a.first == b.first
		? a.second < b.second
		: a.first > b.first;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t >> n;
	vector<pair<ll, string>> a(t);
	for (ll i = 0; i < t; i++) cin >> a[i].second >> a[i].first;
	sort(a.begin(), a.end(), cmp);
	for (ll i = 0; i < n; i++) cout << a[i].second << endl;
}
