#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, c;

void solve(ll l, string s) {
	if (s.size() == l) {
		cout << s << endl;
		c++;
	}

	for (int i = (s.size() == 0 ? 1 : 0); i < 10; i++) {
		solve(l, s += i + '0');
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	// for (int i = 2; i <= 10; i++) {
		// solve(i, "");
	// }
	solve(2, "");
}
