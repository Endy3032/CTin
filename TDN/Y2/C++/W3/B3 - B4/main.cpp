#include <bits/stdc++.h>
using namespace std;

int n, m, a, b, ans = 0;

bool bfs(vector<set<int>> &nodes, vector<bool> &visited, int i) {
	if (visited[i]) return false;
	visited[i] = true;
	for (int j: nodes[i]) bfs(nodes, visited, j);
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	vector<set<int>> ns(n);
	vector<bool> visited(n, false);

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		ns[--a].insert(--b);
		ns[b].insert(a);
	}

	for (int i = 0; i < n; i++) if (bfs(ns, visited, i)) ans++;
	cout << ans << endl;
}
