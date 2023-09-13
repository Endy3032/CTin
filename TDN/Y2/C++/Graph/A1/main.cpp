#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m, a, b;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  cin >> n >> m;
  vector<set<int>> ns(n + 1);

  for (ll i = 0; i < m; i++) {
    cin >> a >> b;
    ns[a].insert(b);
    ns[b].insert(a);
  }

  for (ll i = 1; i <= n; i++) {
    cout << i << ":";
    for (auto j : ns[i]) cout << " " << j;
    cout << endl;
  }
}
