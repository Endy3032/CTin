#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> a;
	map<int, int> d;
	for (int i = a; i < a + n; i++) {
		int x = i;
		while (x) {
			d[x % 10]++;
			x /= 10;
		}
	}
	for (int i = 0; i < 10; i++) cout << d[i] << " ";
	cout << endl;
}
