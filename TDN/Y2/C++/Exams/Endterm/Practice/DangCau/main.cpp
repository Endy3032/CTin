#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int nums[] = { 1, 0, 2, 3, 4, 5, 6, 7, 8, 9 };

void findNum(ll &n, ll &c) {
	ll out;
	string s;
	stringstream is, os;
	map<char, int> m;

	is << n;
	s = is.str();

	int i = 0;
	for (char c : s) {
		if (m.find(c) == m.end()) m[c] = nums[i++];
		os << m[c];
	}

	os >> out;
	c += out;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	ll n, c = 0;
	cin >> n;
	for (ll i = 1; i <= n; i++) findNum(i, c);
	cout << c << endl;
}
