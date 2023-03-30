#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	cout << n * (n - 1) / 2 << endl;
}