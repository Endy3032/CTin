#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, x;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	freopen("THESECONDELE.INP", "r", stdin);
	freopen("THESECONDELE.OUT", "w", stdout);

	cin >> n;
	priority_queue<ll> q;

	while (n--) {
		cin >> x;
		q.push(x);
	}

	q.pop();
	cout << q.top() << endl;
}
