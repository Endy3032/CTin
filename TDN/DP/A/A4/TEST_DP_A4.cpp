#include <bits/stdc++.h>
using namespace std;

/**
 * Random 0 tới A
 * rand() % (A + 1);
 *
 * Random 1 tới A;
 * (rand() % A) + 1
 *
 * Random L tới R
 * rand() % (R - L + 1) + L
 *
*/

typedef long long ll;
ll n, l, r;

int main() {
	freopen("DP_A4_2.INP", "w", stdout);
	srand(time(0));

	n = 1e5;
	cout << n << "\n";

	for (ll i = 0; i < n; i++) cout << (rand() % n) + 1 << " ";

	cout << "\n" << n << "\n";
	for (ll i = 0; i < n; i++) {
		l = (rand() % n) + 1;
		r = (rand() % n) + 1;

		if (l > r) swap(l, r);
		cout << l << " " << r << "\n";
	}
}
