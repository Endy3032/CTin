#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> n;
		cout << (n - 1) * n << endl;
	}
}
