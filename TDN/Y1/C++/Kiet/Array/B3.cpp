#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll cnt, n;

int main() {
  cin >> cnt;
  ll a[cnt];
  fill_n(a, cnt, -1);

  for (ll i = 0; i < cnt; i++) {
    cin >> n;
    a[n] = n;
  }
  for (auto i : a) cout << i << " ";
  cout << "\n";
}
