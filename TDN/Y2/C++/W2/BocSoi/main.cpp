#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;
double x, y, ans = 0.0;
priority_queue<double, vector<double>, greater<double>> q;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
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
