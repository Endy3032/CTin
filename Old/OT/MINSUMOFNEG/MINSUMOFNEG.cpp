#include <bits/stdc++.h>
using namespace std;

int sets, setLen;

void solve(int length) {
  int nums[length], ans = 0, mn = 0;
  for (int a = 0; a < length; a++) cin >> nums[a];

  for (int a = 0; a < length; a++) {
    if (nums[a] < 0) ans += nums[a];
    else ans = 0;

    if (ans < mn) mn = ans;
  }
  cout << mn << endl;
}

int main() {
  freopen("MINSUMOFNEG.inp", "r", stdin);
  freopen("MINSUMOFNEG.out", "w", stdout);
  cin >> sets;
  for (int a = 0; a < sets; a++) {
    cin >> setLen;
    solve(setLen);
  }
}
