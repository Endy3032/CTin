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
	stringstream ss; ss << i;
	string s1 = ss.str(), s2 = ss.str();
	reverse(s2.begin(), s2.end());
	return s1 == s2;
}

int sumDigits(ll i) {
	int o = 0;
	while (i) o += i % 10, i /= 10;
	return o;
}

int lengthNum(ll i) {
	stringstream ss; ss << i;
	return ss.str().length();
}

ll toNum(vector<int> &digits) {
	stringstream ss;
	for (auto i: digits) ss << i;
	ll o;
	ss >> o;
	return o;
}

void solve(ll &l, ll &r, vector<int> &digits, vector<bool> &prime, set<ll> &result, int ind) {
	int n = digits.size();
	for (ll i = ind == 0; i <= 9; i++) {
		digits[ind] = i, digits[n - ind - 1] = i;
		for (ll j = ind + 1; j < n - ind - 1; j++) digits[j] = 0;
		ll num = toNum(digits);
		if (num < l) continue;
		if (num > r) break;
		if (i && isPalindrome(num) && prime[sumDigits(num)]) result.insert(num);
		if (ind < n / 2) solve(l, r, digits, prime, result, ind + 1);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	ll l, r;
	cin >> l >> r;

	vector<bool> p(9 * lengthNum(r) + 1, 1);
	p[0] = 0, p[1] = 0;
	prime(p);

	set<ll> s;
	for (int i = lengthNum(l); i <= lengthNum(r); i++) {
		if (i % 2 == 0) {
			vector<int> digits(i, 0);
			digits[0] = 1, digits[i - 1] = 1;
			s.insert(toNum(digits));
			continue;
		}
		vector<int> digits(i, 0);
		solve(l, r, digits, p, s, 0);
	}

	cout << s.size() << endl;
}
