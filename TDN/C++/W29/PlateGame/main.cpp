#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a, b, r;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> b >> r;
	cout << (r * 2 > a || r * 2 > b ? "Second" : "First") << endl;
}
