#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

int main() {
	cin >> n;
	ll m = n / 3 * 7 + (n % 3 == 1 ? -3 : n % 3 == 2 ? 1 : 0);
	cout << m << endl;
}
