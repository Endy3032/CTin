#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, k, s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;
	vector<ll> a(n, 5);
	s = 5 * n;
	while (s > k) {
		for (ll i = 0; i < n; i++) {
			if (s > k) {
				a[i] -= 1;
				s -= 1;
			}
		}
	}
	cout << count(a.begin(), a.end(), 2) << endl;
}
