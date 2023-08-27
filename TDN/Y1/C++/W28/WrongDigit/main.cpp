#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
string a, b;

int toInt(string s) {
	int o = 0;
	for (int i = 0; i < s.size(); i++) o = o * 10 + (s[i] - '0');
	return o;
}

int replace(string s, char f, char r) {
	for (int i = 0; i < s.size(); i++) if (s[i] == f) s[i] = r;
	return toInt(s);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> b;
	cout
		<< replace(a, '6', '5') + replace(b, '6', '5')
		<< " "
		<< replace(a, '5', '6') + replace(b, '5', '6')
		<< endl;
}
