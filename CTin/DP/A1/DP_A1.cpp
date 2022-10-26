#include <bits/stdc++.h>
using namespace std;

ifstream inp("DP_A1.inp");
ofstream out("DP_A1.out");
typedef unsigned long long ll;

ll n, md = 1000000007, f[1000001] = {0, 1, 1};

int main() {
	for (int i = 3; i <= 1000000; i++) {
		f[i] = (f[i - 1] + f[i - 2]) % md;
	}
	int t; cin >> t;
	while (t--) {
		cin >> n;
		cout << f[n] << endl;
	}
}
