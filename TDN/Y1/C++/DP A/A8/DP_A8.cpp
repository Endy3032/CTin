#include <bits/stdc++.h>
using namespace std;

ifstream inp("DP_A8.inp");
ofstream out("DP_A8.out");
#define cin inp
#define cout out

typedef long long ll;
ll n, k, m, c = 0;

int main() {
	cin >> n >> k;
	vector<ll> ns(n);
	for (ll i = 0; i < n; i++) cin >> ns[i];
	for (ll x = 1; x < n; x++) {
		m = ns[x];
		for (ll y = 0; y < x; y++) {
			if (k - m == ns[y]) c++;
		}
	}
	cout << c << endl;
}
