#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a, r, m;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  cin >> n >> a;
  r = a % n;
  ll ns[r];

  for (ll i = 0; i < r; i++) cin >> ns[i];
  while (cin >> m) cout << m << " ";
  for (ll i = 0; i < r; i++) cout << ns[i] << " ";
  cout << endl;
}
