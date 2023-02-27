#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> a;
	if (a % 2 == 0) {
		cout << (n - a) / 2 + 1 << endl;
	} else {
		cout << (a + 1) / 2 << endl;
	}
}
