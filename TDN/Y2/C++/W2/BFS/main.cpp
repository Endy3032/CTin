#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n, m, s, t, a, b;

int bfs(vector<set<int>> &nodes) {
	queue<int> q;
	vector<int> dist(n, 0);
	vector<bool> visited(n, false);

	q.push(s - 1);
	visited[s - 1] = true;

	while (!q.empty()) {
		a = q.front(); q.pop();
		if (a == t - 1) return dist[a];

		for (int i: nodes[a]) {
			if (!visited[i]) {
				q.push(i);
				visited[i] = true;
				dist[i] = dist[a] + 1;
			}
		}
	}

	return -1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> s >> t;

	vector<set<int>> ns(n);
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		ns[--a].insert(--b);
		ns[b].insert(a);
	}

	cout << bfs(ns) << endl;
}
