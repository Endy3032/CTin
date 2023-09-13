#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a;
string s;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  cin >> n;
  cin.ignore();

  for (ll i = 0; i < n; i++) {
    getline(cin, s);
    stringstream ss(s);

    vector<ll> ns(n, 0);
    while (ss >> a) ns[a - 1] = 1;

    for (auto m: ns) cout << m << " ";
    cout << endl;
  }
}
