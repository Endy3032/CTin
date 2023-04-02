#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll cnt1, cnt2, cnt;

int main() {
  cin >> cnt1 >> cnt2;
  cnt = cnt1 + cnt2;
  ll a[cnt];

  for (ll i = 0; i < cnt; i++) cin >> a[i];
  sort(a, a + cnt);

  for (auto i : a) cout << i << " ";
  cout << "\n";
}
