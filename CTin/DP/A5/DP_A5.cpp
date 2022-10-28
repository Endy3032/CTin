#include <bits/stdc++.h>
using namespace std;

ifstream inp("DP_A5.inp");
ofstream out("DP_A5.out");

typedef long long ll;
ll n, m, s = 0, o = LONG_LONG_MIN;

int main() {
	inp >> n;
	while (n--) {
		inp >> m;
		s += m;
		o = max(s, o);
		if (m < 0) s = 0;
	}
	out << o << endl;
}
