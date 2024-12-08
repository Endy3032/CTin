#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	while (t--) {
		ll n, s = 0, c = 0, x;
		cin >> n;
		while (n--) {
			cin >> x;
			s += x;
			if (sqrt(s) == (ll)sqrt(s) && s % 2 == 1) c++;
		}
		cout << c << endl;
	}
}
