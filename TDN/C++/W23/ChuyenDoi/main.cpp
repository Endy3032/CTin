#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> a;
	ll ns[n];

	for (ll i = 0; i < n; i++) cin >> ns[i];

	for (ll i = a % n; i < n; i++) cout << ns[i] << " ";
	for (ll i = 0; i < a % n; i++) cout << ns[i] << " ";

	cout << endl;
}
