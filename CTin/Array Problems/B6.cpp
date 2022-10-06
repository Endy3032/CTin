#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll cnt, mn = LLONG_MAX;

int main() {
  cin >> cnt;
  ll a[cnt];
  cin >> a[0];
  for (ll i = 1; i < cnt; i++) {
    cin >> a[i];
    mn = min(mn, a[i] - a[i - 1]);
  }
  cout << mn << endl;
}
