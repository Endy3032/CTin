#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, x;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	vector<ll> qo, qe;

	for (ll i = 0; i < n; ++i) {
		cin >> x;
		x % 2 == 0 ? qe.push_back(x) : qo.push_back(x);
	}

	reverse(qo.begin(), qo.end());
	for (auto i: qo) cout << i << " ";
	for (auto i: qe) cout << i << " ";
	cout << endl;
}
