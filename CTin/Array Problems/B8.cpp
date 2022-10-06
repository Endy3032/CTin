#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll c, mx = 0, n = 1;

int main() {
  cin >> c;
  ll cats[c];

  for (ll i = 0; i < c; i++) cin >> cats[i];
  sort(cats, cats + c);

  for (ll i = 0; i < c; i++) {
    if (cats[i] == cats[i + 1])
      n++;
    else {
      mx = max(mx, n);
      n = 1;
    }
  }
  cout << c - mx;
}
