#include <bits/stdc++.h>
using namespace std;

#define maxSize 1000000
int n, prods[maxSize], cnt, cprods[maxSize], cfreq[maxSize];

void input() {
  for (int i = 0; i < n; i++) {
    cin >> prods[i];
  }
  sort(prods, prods + n);
}

void compress() {
  int amt = 0;
  for (int i = 0; i < n; i++) {
    amt++;
    if (prods[i] != prods[i + 1]) {
      cnt++;
      cfreq[cnt] = amt;
      cprods[cnt] = prods[i];
      amt = 0;
    }
  }
}

void solve() {
  int mx, ind;
  for (int i = 1; i <= cnt; i++) {
    if (cfreq[i] > mx) {
      mx = cfreq[i];
      ind = i;
    }
  }
  cout << cprods[ind] << " " << mx;
}

int main() {
  freopen("DEMHANG.inp", "r", stdin);
  freopen("DEMHANG.out", "w", stdout);
  cin >> n;
  input();
  compress();
  solve();
}
