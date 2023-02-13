#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

void solve(string str, char val) {
  str += val;
  if (str.size() == n) {
    cout << str << endl;
    return;
  }

  solve(str, '0');
  solve(str, '1');
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  cin >> n;
  solve("", '0');
  solve("", '1');
}
