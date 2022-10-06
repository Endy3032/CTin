#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a, b, n;

int main() {
  cin >> a >> b;
  n = a + b;
  ll m[n];

  for (int i = 0; i < n; i++) cin >> m[i];
  sort(m, m + n);
  for (auto i: m) cout << i << " ";
}
