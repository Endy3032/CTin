#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll cnt;

int main() {
  cin >> cnt;
  ll a[cnt];
  for (ll i = 0; i < cnt; i++) cin >> a[i];
  sort(a, a + cnt);

  for (ll i = 0; i < cnt - 1; i++) {
    if (a[i] != a[i + 1] - 1) {
      cout << a[i] + 1 << endl;
      break;
    }
  }
}
