#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll xk, yk, xp, yp;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> xk >> yk >> xp >> yp;
  ll dx = abs(xk - xp), dy = abs(yk - yp);
  if (dx != 0 && dx <= 2 && dy != 0 && dy <= 2)
    cout << "Yes";
  else
    cout << "No";
  cout << "\n";
}
