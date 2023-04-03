#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, k, o;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> k;
	queue<pair<ll, ll>> q;
	for (ll i = 0; i < n; i++) {
    ll x;
    cin >> x;
    q.push({ x, i + 1 });
  }

	while (!q.empty()) {
		pair<ll, ll> p = q.front();
		o = p.second;
		q.pop();
		if (p.first > k) {
			p.first -= k;
			q.push(p);
		}
	}
	cout << o << endl;
}
