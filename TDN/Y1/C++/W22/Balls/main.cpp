#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll yh, bh, y, g, b, o = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> yh >> bh >> y >> g >> b;
	yh -= y * 2 + g;
	bh -= b * 3 + g;

	if (yh < 0) {
		o += abs(yh);
		yh = 0;
	}
	if (bh < 0) {
		o += abs(bh);
		bh = 0;
	}
	cout << o << endl;
}
