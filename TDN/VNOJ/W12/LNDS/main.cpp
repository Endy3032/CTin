#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a, mx = LLONG_MIN, lg = 0, o = 1;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	while (n--) {
		cin >> a;
		if (a >= mx) {
			lg++;
		} else {
			o = max(o, lg);
			lg = 1;
		}
		mx = a;
	}
	cout << max(o, lg) << endl;
}
