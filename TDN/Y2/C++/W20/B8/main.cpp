#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, o;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	o = (n / 3) * 7;
	if (n % 3 == 1) o -= 3;
	else if (n % 3 == 2) o += 1;
	cout << o << endl;
}
