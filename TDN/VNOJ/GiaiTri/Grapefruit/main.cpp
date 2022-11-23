#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a, b, p;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> b >> p;
	ll
		abr = a % p == 0 ? 0 : p - a % p,
		bbr = b % p == 0 ? 0 : p - b % p,
		ap = a / p,
		bp = b / p,
		tp = (a + b) / p;
	cout << tp << " " << (ap + bp == tp ? 0 : min(abr, bbr)) << endl;
}
