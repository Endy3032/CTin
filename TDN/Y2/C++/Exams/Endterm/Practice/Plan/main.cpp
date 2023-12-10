#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> ll1D;
typedef vector<ll1D> ll2D;
typedef pair<ll, ll> prll;
ll m, n, c = 0, o = 0;

ll bfs(ll2D &grid, ll val, ll coordX, ll coordY) {
	queue<prll> q; ll acc = 0;
	q.push({ coordX, coordY });

	while (!q.empty()) {
		prll p = q.front(); q.pop();
		ll x = p.first, y = p.second;
		if (x < 0 || x >= n || y < 0 || y >= m || grid[y][x] != val || !grid[y][x]) continue;

		grid[y][x] = 0, acc++;
		q.push({ x - 1, y     });
		q.push({ x + 1, y     });
		q.push({ x,     y - 1 });
		q.push({ x,     y + 1 });
	}

	return acc;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> m >> n;
	ll2D ns(m, ll1D(n, 0));
	for (ll1D &y : ns) {
		for (ll &x : y) cin >> x;
	}

	for (ll y = 0; y < m; y++) {
		for (ll x = 0; x < n; x++) {
			if (ns[y][x]) c++, o = max(bfs(ns, ns[y][x], x, y), o);
		}
	}

	cout << c << " " << o << endl;
}
