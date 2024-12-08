#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	while (t--) {
		ll n, k, c = 0, o = 0;
		string s;
		cin >> n >> k;
		while (n--) {
			cin >> s;
			if (c >= k) continue;
			c += s.size();
			o++;
		}
		cout << (c > k ? o - 1 : o) << endl;
	}
}
