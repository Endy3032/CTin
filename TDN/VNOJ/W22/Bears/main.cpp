#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a, b, c = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> b;
	while (a <= b) {
		c++;
		a *= 3;
		b *= 2;
	}
	cout << c << endl;
}
