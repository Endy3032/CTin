#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a = 0, b = 0, c = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> (i % 2 ? a : b);
		c = max(a + b, c);
	}
	cout << c;
}
