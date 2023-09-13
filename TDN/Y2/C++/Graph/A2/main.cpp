#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m, a, b;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	vector<vector<int>> ns(n, vector<int>(n));

	for (ll i = 0; i < m; i++) {
		cin >> a >> b;
		ns[--a][--b] = 1;
		ns[b][a] = 1;
	}

	for (auto x: ns) {
		for (auto y: x) cout << y << " ";
		cout << endl;
	}
}
