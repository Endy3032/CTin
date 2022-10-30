#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ifstream inp("DP_A4.inp");
ofstream out("DP_A4.out");

ll n, m, l, r;

int main() {
	inp >> n;
	vector<ll> psum(n + 1);

	for (ll i = 1; i <= n; i++) {
		inp >> m;
		psum[i] = psum[i - 1] + m;
	}

	inp >> m;
	for (ll i = 0; i < m; i++) {
		inp >> l >> r;
		out << psum[r] - psum[l - 1] << endl;
	}
}
