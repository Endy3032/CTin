#include <bits/stdc++.h>
using namespace std;

ifstream inp("DNP.inp");
ofstream out("DNP.out");
typedef long long ll;
ll n;

int main() {
	cin >> n;
	ll c = n + 1;
	for (ll x = 2; x <= n / 2 + 1; x++) {
		for (ll y = 1; y <= n / 2 + 1; y++) {
			c += n - (x * 2 - 1) + 1;
			cout << c << endl;
		}
	}
}