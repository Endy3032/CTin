#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, x, dp = 0, c = 0, o = 0;
const ll mod = ll(1e9) + 7;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	while (n--) {
		cin >> x;
		x == 1 ? c++ : x == 2 ? dp = (dp * 2 + c) % mod : o = (o + dp) % mod;
	}

	cout << o << endl;
}
