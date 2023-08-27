#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m;

ll solve(ll m) {
	ll x = 4;
	if (m < x) return x - m;
	else if (m % 2 == 0) return 0;
	else return 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	while (n--) {
		cin >> m;
		cout << solve(m) << endl;
	}
}