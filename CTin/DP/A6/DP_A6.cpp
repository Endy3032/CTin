#include <bits/stdc++.h>
using namespace std;

ifstream inp("DP_A6.inp");
ofstream out("DP_A6.out");
#define cin inp
#define cout out

typedef long long ll;
ll n, m;

int main() {
	cin >> n;
	vector<ll> ns;
	while (cin >> m) ns.push_back(m);

	vector<ll> o(n);
	o[0] = max(ll(0), ns[0]);
	o[1] = max(o[0], ns[1]);

	for (ll i = 2; i < n; i++) o[i] = max(ns[i] + o[i - 2], o[i - 1]);
	cout << o[n - 1] << endl;
}
