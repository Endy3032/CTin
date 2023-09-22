#include <bits/stdc++.h>
using namespace std;

int n, m, a, b;

void bfs(vector<set<int>> &nodes, vector<bool> &visited, int &s, int &t) {
	if (visited[s]) return;
	visited[s] = true;
	if (s == t) return;
	for (int j: nodes[s]) bfs(nodes, visited, j, t);
}

bool solve(vector<set<int>> &nodes, int &s, int &t) {
	vector<bool> visited(n, 0);
	bfs(nodes, visited, s, t);
	return !visited[t];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	vector<set<int>> ns(n);

	for (int i = 0; i < n - 1; i++) {
		cin >> a >> b;
		if (b == 2) continue;
		ns[i + 1].insert(--a);
		ns[a].insert(i + 1);
	}

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		cout << (solve(ns, --a, --b) ? "YES" : "NO") << endl;
	}
}
