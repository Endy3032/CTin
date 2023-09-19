#include <bits/stdc++.h>
using namespace std;

int n, m, a, b;

void bfs(vector<set<int>> &nodes) {
	vector<int> visited(n, 0);
	queue<int> q;

	q.push(0);
	visited[0] = 1;

	while (!q.empty()) {
		int u = q.front(); q.pop();

		for (int v : nodes[u]) {
			if (!visited[v]) {
				q.push(v);
				visited[v] = 1;
			}
		}
	}

	bool flag = true;
	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			cout << i + 1 << endl;
			flag = false;
		}
	}
	if (flag) cout << 0 << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	vector<set<int>> ns(n);
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		ns[--a].insert(--b);
		ns[b].insert(a);
	}

	bfs(ns);
}
