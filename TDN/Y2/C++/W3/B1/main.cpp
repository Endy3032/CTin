#include <bits/stdc++.h>
using namespace std;

int n, m, k, a, b;

void bfs(vector<set<int>> &nodes, vector<bool> &visited, int i) {
	if (visited[i]) return;
	visited[i] = true;
	for (int j: nodes[i]) bfs(nodes, visited, j);
}

bool solve(vector<set<int>> &nodes) {
	vector<bool> visited(n, 0);
	bfs(nodes, visited, 0);
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

	cout << (solve(ns) ? "Yes" : "No") << endl;
}
