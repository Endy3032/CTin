#include <bits/stdc++.h>
using namespace std;

string solve(int n, int k, string s) {
	for (int i = 0; i <= k; i++) {
		string ss = s.substr(i, n - k);
		string ss2 = ss;
		reverse(ss2.begin(), ss2.end());
		if (ss == ss2) return ss;
	}

	return "No";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k;
	string s;

	cin >> n >> k >> s;
	cout << solve(n, k, s) << endl;
}
