#include <bits/stdc++.h>
using namespace std;

ifstream inp("FREQUENCY.inp");
ofstream out("FREQUENCY.out");
#define cin inp
#define cout out

typedef long long ll;
ll n, m, mx = 0;
map<ll, ll> ns;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (ll i = 0; i < n; i++) {
		cin >> m;
		ns[m]++;
		mx = max(mx, ns[m]);
	}

	for (auto i : ns) if (i.second == mx) cout << i.first << " ";
	cout << endl;
}