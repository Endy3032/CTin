#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a, b;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> a >> b;

	for (int i = 0; i <= n / a; i++) {
		if ((n - i * a) % b == 0) {
			cout << "YES" << endl;
			cout << i << " " << (n - i * a) / b;
			return 0;
		}
	}
	cout << "NO" << endl;
}
