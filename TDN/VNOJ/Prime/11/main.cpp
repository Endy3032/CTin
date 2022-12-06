#define _el << "\n"
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n, p;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> n >> p;
		ll o = 0;
		while (n > 0) o += (n /= p);
		cout << o _el;
	}
}
