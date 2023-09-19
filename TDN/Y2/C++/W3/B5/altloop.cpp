#include <bits/stdc++.h>
using namespace std;

int n, m, a, b;

bool bfs(vector<set<int>> &nodes, vector<int> &weight, int s, int t) {
  queue<int> q;
  vector<int> parent(n, -1);
  vector<bool> visited(n, 0);

  q.push(s);
  visited[s] = true;

  while (!q.empty()) {
    int u = q.front();
    q.pop();

    for (int v: nodes[u]) {
      if (!visited[v]) {
        q.push(v);
        parent[v] = u;
        visited[v] = 1;
      }
    }
  }

  while (t != -1) {
    if (weight[t] == 2) return true;
    t = parent[t];
  }
  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  cin >> n >> m;
  vector<set<int>> ns(n);
  vector<int> w(n, 1);

  for (int i = 0; i < n - 1; i++) {
    cin >> a >> b;
    ns[i + 1].insert(--a);
    ns[a].insert(i + 1);
    w[i + 1] = b;
  }

  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    cout << (bfs(ns, w, --a, --b) ? "YES" : "NO") << endl;
  }
}
