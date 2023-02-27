#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m, p;
set<ll> numSet;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
  for (int x = 0; x < 2; x++) {
    cin >> m;
    for (int y = 0; y < m; y++) {
      cin >> p;
      numSet.insert(p);
    }
  }

  cout << (numSet.size() == n ? "YES" : "NO") << endl;
}
