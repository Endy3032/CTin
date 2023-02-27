#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;
vector<ll> f;

int main() {
  freopen("BAI1.INP", "r", stdin);
  freopen("BAI1.out", "w", stdout);

  cin >> n;
  ll rt = sqrt(n);

  for (ll i = 1; i <= rt; i++) {
    if (n % i == 0) {
      f.push_back(i);
      if (n % (n / i) == 0 && n / i != i) f.push_back(n / i);
    }
  }

  sort(f.begin(), f.end());
  for (auto e : f) cout << e << endl;
}
