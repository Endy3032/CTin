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
  vector<vector<ll>> ns(n), gr(n, vector<ll>(n));

  for (ll i = 0; i < n; i++) {
    getline(cin, s);
    stringstream ss(s);
    while (ss >> a) ns[i].push_back(a);
  }

  for (ll i = 0; i < n; i++) {
    for (auto j : ns[i]) {
      gr[i][j - 1] = 1;
      gr[j - 1][i] = 1;
    }
  }

  for (auto x : gr) {
    for (auto y : x) cout << y << " ";
    cout << endl;
  }
}
