#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;
float x, y, ans = 0.0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	priority_queue<float, vector<float>, greater<float>> q;

	while (n--) {
		cin >> x;
		q.push(x);
	}

	while (q.size() > 1) {
		x = q.top(); q.pop();
		y = q.top(); q.pop();
		ans += (x + y) / 20.0;
		q.push(x + y);
	}

	cout << fixed << setprecision(2) << ans << endl;
}
