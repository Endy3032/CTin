#define el "\n"

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a = 0, b = 0, d = LLONG_MAX, oa, ob;
vector<vector<ll>> o(2);
vector<ll> ns;

void solve(string str) {
  if (str.size() == n) {
    a = 0, b = 0;

    for (ll i = 0; i < n; i++) (str[i] == '0' ? a : b) += ns[i];

    if (abs(a - b) < d) {
      oa = a; ob = b;
      d = abs(a - b);
      o[0].clear();
      o[1].clear();
      for (ll i = 0; i < n; i++) o[str[i] == '1'].push_back(i + 1);
    }
    return;
  }

  solve(str + '0');
  solve(str + '1');
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;
    ns.push_back(a);
  }

  solve("");

  cout << oa << el;
  for (auto i: o[0]) cout << i << " ";
  cout << el << ob << el;
  for (auto i: o[1]) cout << i << " ";
  cout << el;
}
