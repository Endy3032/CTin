#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, c = 0;

string solve(ll l, string s, ll t) {
	if (s.size() == l) {
		c++;
		if (c == n) return s;
		return "";
	}

	if (s.size() == l - 1) return solve(l, s + char(10 - t + '0'), t + 10 - t);
	for (int i = (s.size() == 0 ? 1 : 0); i < 10 - t; i++) {
		string o = solve(l, s + char(i + '0'), t + i);
		if (o.size() > 0) return o;
	}
	return "";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 2; i <= 10; i++) {
		string r = solve(i, "", 0);
		if (r.size() > 0) {
			cout << r << endl;
			return 0;
		}
	}
}
