#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (auto &i: a) cin >> i;

		bool found = false;
		for (int i = 0; i < n; i++) {
			int x = a[i];
			bool dead = false;
			for (int j = 0; j < n; j++) {
				if (i == j) continue;
				if (abs(a[j] - x) % k == 0) {
					dead = true;
					break;
				}
			}
			if (!dead) {
				found = true;
				cout << "yes\n" << i + 1 << '\n';
				break;
			}
		}
		if (!found) cout << "no\n";
	}
}
