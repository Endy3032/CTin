#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

void solve(vector<int> v, ll a, ll sm) {
  if (sm == n) {
    for (auto i: v) cout << i << " ";
    cout << endl;
    return;
  }

  for (int i = a; i < n; i++) {
    v.push_back(i);
    if (sm + i > n) return;
    solve(v, i, sm + i);
    v.pop_back();
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
  vector<int> v;
  solve(v, 1, 0);
}
