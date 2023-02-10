#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;
string s = "";

void dewey(string s, string bit, ll cur, ll n) {
  s += bit;
  if (cur == n) {
    cout << s << endl;
    return;
  }
  dewey(s, "0", cur + 1, n);
  dewey(s, "1", cur + 1, n);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  cin >> n;
  dewey("", "0", 1, n);
  dewey("", "1", 1, n);
  return 0;
}