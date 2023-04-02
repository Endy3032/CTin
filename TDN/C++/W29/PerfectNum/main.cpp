#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, c = 0, len;

string solve(string str, ll sum) {
	if (str.size() == len) {
		c++;
		return (c == n ? str : "");
	}

	ll r = str.size() == 0 ? 1 : 0;
	if (str.size() == len - 1) return solve(str + char(10 - sum + '0'), 10);

	for (int i = r; i <= 10 - sum - r; i++) {
		string o = solve(str + char(i + '0'), sum + i);
		if (o.size() > 0) return o;
	}
	return "";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 2; i <= 10; i++) {
		len = i;
		string r = solve("", 0);
		if (r.size() > 0) {
			cout << r << endl;
			return 0;
		}
	}
}
