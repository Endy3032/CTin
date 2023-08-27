#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll w, h;

int main() {
  cin >> w >> h;
  ll a[h][w], sums[h];

  for (ll y = 0; y < h; y++) {
    sums[y] = 0;
    for (ll x = 0; x < w; x++) {
      cin >> a[y][x];
      sums[y] += a[y][x];
    }
  }
  sort(sums, sums + h);
  cout << sums[h - 1] << endl;
}
