#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	while (n--) {
		ll a, c = 0;
		cin >> a;
		while (a > 1) {
			if (a % 2 == 0) a /= 2;
			else if (a % 3 == 0) a = a / 3 * 2;
			else if (a % 5 == 0) a = a / 5 * 4;
			else break;
			c++;
		}
		cout << (a == 1 ? c : -1) << endl;
	}
}
