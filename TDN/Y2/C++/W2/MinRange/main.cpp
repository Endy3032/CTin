#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, r, a;
vector<ll> ns;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> r;
	while (n--) {
		cin >> a;
		ns.push_back(a);
	}

	auto mn = min_element(ns.begin(), ns.begin() + r);
	cout << *mn;
}