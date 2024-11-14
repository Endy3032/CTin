#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int t, n, a = 0, b = 0;

int isPerfect(int a, int b) {
	return (abs(b - a) == 5 || abs(b - a) == 7) ? 1 : 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> n;
		cin >> a >> b;
		bool flag = isPerfect(a, b);
		n -= 2;
		if (n > 0) {
			while (n--) {
				a = b;
				cin >> b;
				flag &= isPerfect(a, b);
			}
		}
		cout << (flag ? "YES" : "NO") << endl;
	}
}
