#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m, mn = LLONG_MAX, mx = LLONG_MIN;
map<ll, ll> numMap;
set<ll> numSet;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
  for (ll i = 0; i < n; i++) {
    cin >> m;
    numMap[m]++;
    numSet.insert(m);
    mn = min(mn, m);
    mx = max(mx, m);
  }

  n = mx - mn;
  m = 0;

  for (auto i: numSet) {
    if (numMap[i + n] != 0) m += min(numMap[i], numMap[i + n]);
    if (numMap[i - n] != 0) m += min(numMap[i], numMap[i - n]);
  }
  cout << n << " " << m << endl;
}
