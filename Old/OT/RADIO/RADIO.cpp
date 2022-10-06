#include <bits/stdc++.h>
using namespace std;

int cnt;
string msg;

void solve() {
  int c = 0;
  string a = "";
  for (int i = 0; i < msg.size(); i++) {
    // while (msg[i + c] == a[c % a.size()])
    a += msg[i];
  }
}

int main() {
  freopen("RADIO.inp", "r", stdin);
  freopen("RADIO.out", "w", stdout);
  cin >> cnt;
  for (int i = 0; i < cnt; i++) cin >> msg;
  solve();
}
