#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m = -1e9;

int main() {
  freopen("BAI3.INP", "r", stdin);
  freopen("BAI3.out", "w", stdout);
  cin >> n;

  vector<ll> a(n + 1);
  a[0] = 0;

  for (ll i = 1; i <= n; i++) {
    cin >> a[i];
    a[i] += a[i - 1];
  }

  for (ll ln = 2; ln <= n / 2; ln++) {
    for (ll x = ln * 2; x <= n; x++) {
      m = max(m, a[x] - a[x - ln * 2]);
    }
  }
  cout << m;
}
