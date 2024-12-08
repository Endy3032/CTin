#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	while (t--) {
		ll n, c = 1, s = 1;
		cin >> n;
		while (s < n) {
			ll r = (s + 1) * 2;
			c++;
			s = r;
		}
		cout << c << "\n";
	}
}
