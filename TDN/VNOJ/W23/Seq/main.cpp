#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a, b;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> b;
	if (a == 0 && b == 0) {
		cout << "NO" << endl;
		return 0;
	}
	cout << (abs(a - b) <= 1 ? "YES" : "NO") << endl;
}
