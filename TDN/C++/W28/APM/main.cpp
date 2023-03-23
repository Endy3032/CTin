#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (ll i = 29; i >= 0; i--) {
		if (n & (1 << i)) {
			cout << i << " " << n - (1 << i) << endl;
			return 0;
		}
	}
}
