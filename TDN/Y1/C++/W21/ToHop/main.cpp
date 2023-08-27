#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, k, chk[31];

void solve(vector<int> v, ll a) {
  if (v.size() == k) {
    for (auto i: v) cout << i << " ";
    cout << endl;
    return;
  }

  for (int i = a; i <= n; i++) {
    if (chk[i]) continue;
    chk[i] = 1;
    v.push_back(i);
    solve(v, i);
    v.pop_back();
    chk[i] = 0;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> k;
  vector<int> v;
  solve(v, 1);
}
