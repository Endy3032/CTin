#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m;

int solve() {
	if (m % n == 0) {
		return (m / n + 1) * n;
	} else if (n % m == 0) {
		return 0;
	} else {
		return -1;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	cout << solve() << endl;
}
