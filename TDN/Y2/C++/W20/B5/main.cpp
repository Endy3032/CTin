#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, c = 0, o = 0;
bool endPrime = false;

void prime(vector<int> &v) {
	for (ll i = 2; i < v.size(); i++) {
		if (!v[i]) continue;
		for (ll j = i * i; j < v.size(); j += i) v[j] = 0;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	vector<int> pr(n + 1, 1);
	pr[0] = pr[1] = 0;
	prime(pr);

	vector<ll> found;

	for (ll i = 2; i < n; i++) {
		if (!pr[i]) continue;
		found.push_back(pr[i]);
		if (!endPrime && i * i * i <= n) o++;
		if (i * i * i > n) endPrime = true;
	}

	cout << c << endl;
}
