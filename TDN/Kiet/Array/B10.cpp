#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll w, h, x = 0, y = 0, c = 0, m = 0, d = 0;

int main() {
  cin >> w >> h;
  ll a[h][w];

  for (y = 0; y < h; y++) {
    for (x = 0; x < w; x++) {
      cin >> a[y][x];
    }
  }

  x = 0, y = 0;
  while (c != w * h) {
    cout << a[y][x] << " ";
    c++;

    if (d == 0) {
      x++;
      if (x == w - m - 1) d = 1;
    } else if (d == 1) {
      y++;
      if (y == h - m - 1) d = 2;
    } else if (d == 2) {
      x--;
      if (x == m) d = 3;
    } else if (d == 3) {
      y--;
      if (y == m + 1) {
        m++;
        d = 0;
      }
    }
  }
  cout << endl;
}
