#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll w, h;

int main() {
  cin >> w >> h;
  ll a[h][w], b[h][w];

  for (ll y = 0; y < h; y++)
    for (ll x = 0; x < w; x++) cin >> a[y][x];

  for (ll x = 0; x < w; x++) {
    ll t[h];
    for (ll y = 0; y < h; y++) t[y] = a[y][x];
    sort(t, t + h, greater());
    for (ll y = 0; y < h; y++) b[y][x] = t[y];
  }

  for (ll y = 0; y < h; y++) {
    for (ll x = 0; x < w; x++) cout << b[y][x] << " ";
    cout << endl;
  }
}
