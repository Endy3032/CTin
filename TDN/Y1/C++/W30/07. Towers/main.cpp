#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, x = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (ll i = 1; i <= n; i++) x += i * (i + 1) / 2;
	cout << x << endl;
}