#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a, b;

void solve(ll a, ll b) {
	if (a > b || abs(a - b) > 1) cout << "-1";
	else if (b - a == 1) cout << a << " " << b;
	else cout << a * 10 << " " << b * 10 + 1;
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	while (n--) {
		cin >> a >> b;
		solve(a, b);
	}
}