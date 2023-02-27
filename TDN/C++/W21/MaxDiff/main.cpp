#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m, mn = LLONG_MAX, mx = LLONG_MIN;
map<ll, ll> numMap;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
  for (ll i = 0; i < n; i++) {
    cin >> m;
    numMap[m]++;
    mn = min(mn, m);
    mx = max(mx, m);
  }

  n = mx - mn;
  m = numMap[mx] * (mx == mn ? ((numMap[mx] - 1) / 2) : numMap[mn]);

  cout << n << " " << m << endl;
}
