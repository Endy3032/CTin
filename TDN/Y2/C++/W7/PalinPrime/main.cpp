#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void prime(vector<bool> &v) {
	for (ll i = 2; i < v.size(); i++) {
		if (!v[i]) continue;
		for (ll j = i * i; j < v.size(); j += i) v[j] = 0;
	}
}

bool isPalindrome(ll i) {
	stringstream ss;
	ss << i;
	string s1 = ss.str();
	string s2 = ss.str();
	reverse(s2.begin(), s2.end());
	return s1 == s2;
}

int sumDigits(ll i) {
	int o = 0;
	while (i) {
		o += i % 10;
		i /= 10;
	}
	return o;
}

int lengthNum(ll i) {
	int o = 0;
	while (i) {
		o++;
		i /= 10;
	}
	return o;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	ll l, r, c = 0;
	cin >> l >> r;

	vector<bool> p(9 * lengthNum(r) + 1, 1);
	p[0] = 1, p[1] = 1;
	prime(p);

	for (ll i = l; i <= r; i++) {
		if (isPalindrome(i) && p[sumDigits(i)]) c++;
	}

	cout << c << endl;
}
