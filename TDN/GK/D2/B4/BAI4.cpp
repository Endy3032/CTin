#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m = 0, pwr, prc;

int main() {
  freopen("BAI4.INP", "r", stdin);
  freopen("BAI4.OUT", "w", stdout);

  cin >> n;
  vector<ll> c(n);
  for (ll i = 0; i < n; i++) cin >> c[i];
  sort(c.begin(), c.end());

  cin >> n;
  vector<pair<ll, ll> > ac(n);
  for (ll i = 0; i < n; i++) {
    cin >> pwr >> prc;
    ac[i] = make_pair(prc, pwr);
  }
  sort(ac.begin(), ac.end());

  for (ll x = 0; x < c.size(); x++) {
    for (ll y = 0; y < ac.size(); y++) {
      if (ac[y].second < c[x]) continue;
      m += ac[y].first;
      break;
    }
  }
  cout << m << endl;
}
