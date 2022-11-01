#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m;
set<ll> c;
vector<ll> t(1e6 + 1);

int main() {
  freopen("BAI2.INP", "r", stdin);
  freopen("BAI2.out", "w", stdout);

  // Nhập số & phân loại số bằng set
  cin >> n;
  for (ll i = 0; i < n; i++) {
    cin >> m;
    c.insert(m);
    t[m]++;
  }

  // Test từng số trong set
  m = 0;
  for (auto x : c) {
    n = t[x];
    m += n / x;
    if (n % x != 0) m++;
  }
  cout << m << endl;
}
