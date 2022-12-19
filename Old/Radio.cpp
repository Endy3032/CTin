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
  /**
   * 8
   * cabcabca
  */
  freopen("RADIO.inp", "r", stdin);
  /**
   * c 0
   * ca 0
   * cab 1
   * cabc 1
   * cabca 1
   * cabcab 2
   * cabcabc 2
   * cabcabca 2
  */
  freopen("RADIO.out", "w", stdout);
  cin >> cnt;
  for (int i = 0; i < cnt; i++) cin >> msg;
  solve();
}
