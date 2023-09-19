#include <bits/stdc++.h>
using namespace std;

int n, m, k, a, b;

bool bfs(vector<set<int>> &nodes) {
	vector<bool> visited(n, 0);
	queue<int> q;

	q.push(0);
	visited[0] = true;

	while (!q.empty()) {
		int u = q.front(); q.pop();

		for (int v : nodes[u]) {
			if (!visited[v]) {
				q.push(v);
				visited[v] = 1;
			}
		}
	}

	return visited[k - 1];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> k;

	vector<set<int>> ns(n);
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		ns[--a].insert(--b);
		ns[b].insert(a);
	}

	cout << (bfs(ns) ? "Yes" : "No") << endl;
}
