#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll cnt, n = 1;

int main() {
  cin >> cnt;
  ll a[cnt];
  for (ll i = 0; i < cnt; i++) cin >> a[i];
  sort(a, a + cnt);

  for (ll i = 0; i < cnt; i++) {
    if (a[i] == a[i + 1]) n++;
    else {
      cout << a[i] << ": " << n << endl;
      n = 1;
    }
  }
}
