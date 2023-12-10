#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, c = 0;

int largestDigit(ll n) {
	priority_queue<int> q;
	while (n) {
		q.push(n % 10);
		n /= 10;
	}
	return q.top();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	while (n > 0) n -= largestDigit(n), c++;
	cout << c << endl;;
}
