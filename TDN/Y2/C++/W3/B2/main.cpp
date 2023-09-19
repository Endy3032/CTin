#include <bits/stdc++.h>
using namespace std;

int n, m, a, b;

void bfs(vector<set<int>> &nodes, vector<bool> &visited, int i) {
  if (visited[i]) return;
  visited[i] = true;
  for (int j: nodes[i]) bfs(nodes, visited, j);
}

void solve(vector<set<int>> &nodes) {
	vector<bool> visited(n, 0);
	bfs(nodes, visited, 0);

	bool flag = true;
	for (int i = 0; i < n; i++) {
		if (visited[i]) continue;
		cout << i + 1 << endl;
		flag = false;
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

	solve(ns);
}
