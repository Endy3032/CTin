#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m, a, b, o = LLONG_MAX;

int solve() {
	o = min(o, n * a);
	o = min(o, (n / m + 1) * b);
	o = min(o, (n / m) * b + (n % m) * a);
	return o;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m >> a >> b;
	cout << solve() << endl;
}
