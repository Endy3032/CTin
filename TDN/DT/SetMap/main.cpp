#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, x;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	set<ll> a;
	map<ll, ll> b;
	for (ll i = 0; i < n; i++) {
		cin >> x;
		a.insert(x);
		b[x]++;
	}
	for (auto i : a) cout << i << " ";
	for (auto i : b) cout << endl << i.first << " " << i.second;

	cout << endl;
	// Set
	// Smallest
	cout << endl << *a.begin();
	// Largest
	cout << endl << *prev(a.end()) << endl;

	// Map
	// Smallest
	cout << endl << b.begin()->first << " " << b.begin()->second;
	// Largest
	cout << endl << prev(b.end())->first << " " << prev(b.end())->second;
	cout << endl << b.rbegin()->first << " " << b.rbegin()->second;
	cout << endl;
}
