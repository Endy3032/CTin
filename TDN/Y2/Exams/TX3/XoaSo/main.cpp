#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
string s;
ll n, c = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> s;

	stringstream a;
	a << s;
	a >> n;
	if (n % 3 == 0) c++;

	for (ll i = 1; i < s.length(); i++) {
		for (ll j = 0; j <= s.length() - i; j++) {
			string ss = s;
			ss.erase(j, i);
			stringstream sss;
			sss << ss;
			sss >> n;
			if (n % 3 == 0) c++;
		}
	}

	cout << c << endl;
}