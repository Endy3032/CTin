#define sp " "
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll xa, ya, xb, yb;

void solve() {
	if (ya == yb) {
		cout << xa << sp << (ya + xa - xb) << sp << xb << sp << (yb + xa - xb);
	} else if (xa == xb) {
		cout << (xa + ya - yb) << sp << ya << sp << (xb + ya - yb) << sp << yb;
	} else if (abs(xa - xb) == abs(ya - yb)) {
		cout << xa << sp << yb << sp << xb << sp << ya;
	} else {
		cout << -1;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> xa >> ya >> xb >> yb;
	solve();
	cout << endl;
}
