#include <bits/stdc++.h>
using namespace std;

ifstream inp("MULMAX.inp");
ofstream out("MULMAX.out");
// #define cin inp
// #define cout out

typedef long long ll;
ll n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	vector<ll> ns(n);
	for (ll i = 0; i < n; i++) cin >> ns[i];

	sort(ns.begin(), ns.end());

}
