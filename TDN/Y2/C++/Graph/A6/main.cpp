#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  cin >> n;
  cin.ignore();

  string s;
  vector<vector<ll>> ns(n);
  vector<pair<ll, ll>> ans;

  for (ll i = 0; i < n; i++) {
    getline(cin, s);
    stringstream ss(s);
    while (ss >> a) ns[i].push_back(a);
  }

  for (ll i = 0; i < n; i++) {
    for (auto j: ns[i]) {
      if (i >= j - 1) continue;
      ans.push_back({i + 1, j});
    }
  }

  for (auto p: ans) cout << p.first << " " << p.second << endl;
}
