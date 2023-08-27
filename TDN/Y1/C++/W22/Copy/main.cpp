#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll x, y;

bool solve(ll bw, ll cl) {
  if (cl == 0 || (cl <= 1 && bw != 0)) return 0;
  cl--;
  if (bw == cl || ((bw - cl) % 2 == 0 && bw > cl)) return 1;
  else return 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> x >> y;
  cout << (solve(x, y) ? "Yes" : "No") << "\n";
}
