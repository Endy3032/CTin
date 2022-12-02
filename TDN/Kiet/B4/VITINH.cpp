#include <bits/stdc++.h>
using namespace std;

ifstream inp("VITINH.inp");
ofstream out("VITINH.out");

typedef long long ll;
ll n, o = 0;

int main() {
	cin >> n;
	ll mx = ceil(log10(n));
	for (ll i = 1; i <= mx; i++) {
		o += i * ((min(ll(pow(10, mx)), n) - (pow(10, mx))) / 2 + 1);
	}
	cout << o << endl;
}
