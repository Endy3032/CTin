#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, sm;

void solve(vector<int> v, ll a) {
  if (sm == n) {
    for (auto i: v) cout << i << " ";
    cout << endl;
    return;
  } else if (sm > n) return;

  for (int i = a; i < n; i++) {
    sm += i;
    v.push_back(i);
    solve(v, i);
    v.pop_back();
    sm -= i;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
  vector<int> v;
  solve(v, 1);
}
