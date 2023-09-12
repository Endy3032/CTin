#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, x, s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	priority_queue<ll, vector<ll>, greater<ll>> q;

	while (n--) {
		cin >> x;

		if (!q.empty()) {
			ll m = q.top();
			s += m;
			q.pop();
			q.push(m * 2);
		}

		q.push(x);
	}

	cout << s << endl;
}
