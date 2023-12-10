#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	priority_queue<ll, vector<ll>, greater<ll>> ns;
	while (n--) {
		ll a;
		cin >> a;
		ns.push(a);
	}

	double ans = 0;
	while (ns.size() > 1) {
		auto a = ns.top(); ns.pop();
		auto b = ns.top(); ns.pop();
		ans += (double(a) + double(b)) / 20.0;
		ns.push(a + b);
	}

	cout << fixed << setprecision(2) << ans << endl;
}
