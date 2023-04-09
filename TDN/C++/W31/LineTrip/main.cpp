#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, x, mn = 0, mx = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	while (n--) {
		cin >> x;
		mn = min(mn, x);
		mx = max(mx, x);
	}

	cout << abs(mx - mn) * 2 << endl;
}
