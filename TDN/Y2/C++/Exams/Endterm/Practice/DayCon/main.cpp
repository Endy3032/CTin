#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a, b, c = 1, o = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (ll i = 0; i <= n; i++) {
		if (i < n) cin >> a;
		if (i) {
			if (a >= b && i < n) c++;
			else {
				o = max(c, o);
				c = 1;
			}
		}
		swap(a, b);
	}

	cout << o << endl;
}
