#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a;
double f[110] = { 1.0, 2.0, 3.0 };

void fib() {
	for (int i = 3; i < 110; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	fib();
	while (n--) {
		cin >> a;
		stringstream s;
		s << fixed << f[a - 1];
		cout << s.str() << endl;
		cout << f[a - 1] << endl;
	}
}
